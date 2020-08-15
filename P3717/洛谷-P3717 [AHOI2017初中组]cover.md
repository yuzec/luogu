# 洛谷-P3717 [AHOI2017初中组]cover

> 原题链接：https://www.luogu.com.cn/problem/P3717

- [题目背景](#题目背景)
- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目背景">题目背景</a>

以下为不影响题意的简化版题目。

### <a name="题目描述">题目描述</a>

一个 $n\times n$ 的网格图（标号由 $1$ 开始）上有 $m$ 个探测器，每个探测器有个探测半径 $r$ ，问这 $n\times n$ 个点中有多少个点能被探测到。

### <a name="输入格式">输入格式</a>

第一行 $3$ 个整数 $n,m,r$ ;

接下来 $m$ 行，每行两个整数 $x,y$表示第 $i$ 个探测器的坐标。

### <a name="输出格式">输出格式</a>

能被探测到的点的个数。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
5 2 1
3 3
4 2
```

#### 输出 #1

```c++
8
```

### <a name="说明/提示">说明/提示</a>

1≤n,m≤100

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cmath>
using namespace std;

int a[105][105];

int main() {
    int n, m, r, ans=0;
    cin >> n >> m >> r;
    int x[m], y[m];
    for (int i=0; i<m; ++i) {
        cin >> x[i] >> y[i];
        a[x[i]][y[i]] = 1;
    }
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j) {
            if (a[i][j] > 0)
                continue;
            for (int k=0; k<m; ++k)
                if (sqrt(pow(i-x[k], 2) + pow(j-y[k], 2)) <= r)
                    a[i][j] = 1;
        }
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j)
            ans += a[i][j];
    cout << ans << endl;
    return 0;
}
```