# 洛谷-P1205 [USACO1.2]方块转换 Transformations

> 原题链接：https://www.luogu.com.cn/problem/P1205

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

一块 $n \times n$ 正方形的黑白瓦片的图案要被转换成新的正方形图案。写一个程序来找出将原始图案按照以下列转换方法转换成新图案的最小方式：

- 转 90°：图案按顺时针转 90°。
- 转 180°：图案按顺时针转 180°。
- 转 270°：图案按顺时针转 270°。
- 反射：图案在水平方向翻转（以中央铅垂线为中心形成原图案的镜像）。
- 组合：图案在水平方向翻转，然后再按照 $1 \sim 3$ 之间的一种再次转换。
- 不改变：原图案不改变。
- 无效转换：无法用以上方法得到新图案。

如果有多种可用的转换方法，请选择序号最小的那个。

只使用上述 $7$ 个中的一个步骤来完成这次转换。

### <a name="输入格式">输入格式</a>

第一行一个正整数 $n$。

然后 $n$ 行，每行 $n$ 个字符，全部为 `@` 或 `-`，表示初始的正方形。

接下来 $n$ 行，每行 $n$ 个字符，全部为 `@` 或 `-`，表示最终的正方形。

### <a name="输出格式">输出格式</a>

单独的一行包括 $1 \sim 7$ 之间的一个数字（在上文已描述）表明需要将转换前的正方形变为转换后的正方形的转换方法。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
3
@-@
---
@@-
@-@
@--
--@
```

#### 输出 #1

```c++
1
```

### <a name="说明/提示">说明/提示</a>

【数据范围】
 对于 $100\%$ 的数据，$1\le n \le 10$。

题目翻译来自NOCOW。

USACO Training Section 1.2

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
using namespace std;

int n;
char a[10][10], b[10][10], c[10][10], d[10][10];

void rotate(char x[][10], char y[][10]) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            y[j][n-i-1] = x[i][j];
}

void flip(char x[][10], char y[][10]) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            y[i][n-j-1] = x[i][j];
}

bool isEqual(char x[][10], char y[][10]) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            if (x[i][j] != y[i][j])
                return false;
    return true;
}

void copy(char x[][10], char y[][10]) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            y[i][j] = x[i][j];
}

int main() {
    cin >> n;
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            cin >> a[i][j];
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            cin >> b[i][j];
    copy(a, d);
    for (int i=1; i<=3; ++i) {
        rotate(d, c);
        if (isEqual(c, b)) {
            cout << i << endl;
            return 0;
        }
        copy(c, d);
    }
    flip(a, d);
    if (isEqual(d, b)) {
        cout << 4 << endl;
        return 0;
    }
    for (int i=0; i<3; ++i) {
        rotate(d, c);
        if (isEqual(c, b)) {
            cout << 5 << endl;
            return 0;
        }
        copy(c, d);
    }
    if (isEqual(a, b)) {
        cout << 6 << endl;
        return 0;
    }
    cout << 7 << endl;
    return 0;
}
```