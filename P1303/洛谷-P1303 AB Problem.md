# 洛谷-P1303 A*B Problem

> 原题链接：https://www.luogu.com.cn/problem/P1303

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

求两数的积。

### <a name="输入格式">输入格式</a>

两行，两个整数。

### <a name="输出格式">输出格式</a>

一行一个整数表示乘积。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
1 
2
```

#### 输出 #1

```c++
2
```

### <a name="说明/提示">说明/提示</a>

每个数字不超过 $10^{2000}$ ，需用高精。

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 50000

int m[MAXN], n[MAXN], t[MAXN];

void multip(string x, string y) {
    int lenx = x.size();
    int leny = y.size();
    int len = lenx + leny;
    for (int i=0; i<lenx; ++i)
        m[i] = x[lenx-i-1] - '0';
    for (int i=0; i<leny; ++i)
        n[i] = y[leny-i-1] - '0';
    for (int i=0; i<lenx; ++i)
        for (int j=0; j<leny; ++j)
            t[i+j] += m[i] * n[j];
    for (int i=0; i<len; ++i)
        if (t[i] > 9) {
            t[i+1] += t[i] / 10;
            t[i] %= 10;
        }
    while (t[len-1] == 0 && len > 1)
        --len;
    for (int i=len-1; i>=0; --i)
        cout << t[i];
}

int main() {
    string a, b;
    cin >> a >> b;
    multip(a, b);
    cout << endl;
    return 0;
}
```