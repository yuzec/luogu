# 洛谷-P1216 \[USACO1.5][IOI1994]数字三角形 Number Triangles

> 原题链接：https://www.luogu.com.cn/problem/P1216

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

观察下面的数字金字塔。

写一个程序来查找从最高点到底部任意处结束的路径，使路径经过数字的和最大。每一步可以走到左下方的点也可以到达右下方的点。

```cpp
        7 
      3   8 
    8   1   0 
  2   7   4   4 
4   5   2   6   5 
```

在上面的样例中,从 $7 \to 3 \to 8 \to 7 \to 5$ 的路径产生了最大

### <a name="输入格式">输入格式</a>

第一个行一个正整数 $r$ ,表示行的数目。

后面每行为这个数字金字塔特定行包含的整数。

### <a name="输出格式">输出格式</a>

单独的一行,包含那个可能得到的最大的和。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5 
```

#### 输出 #1

```c++
30
```

### <a name="说明/提示">说明/提示</a>

【数据范围】
 对于 $100\%$ 的数据，$1\le r \le 1000$，所有输入在 $[0,100]$ 范围内。

题目翻译来自NOCOW。

USACO Training Section 1.5

IOI1994 Day1T1

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
using namespace std;
#define max(x,y) ((x)>(y)?(x):(y))

int a[1001][1001],b[1001][1001];

int dp(int r) {
    int i,j,ans=0;
    b[0][0]=a[0][0];
    for(i=1;i<r;++i)
        for(j=0;j<=i;++j) {
            if(j==0)
                b[i][j]=a[i][j]+b[i-1][j];
            else if(j==i)
                b[i][j]=a[i][j]+b[i-1][j-1];
            else
                b[i][j]=a[i][j]+max(b[i-1][j-1],b[i-1][j]);
        }
    for(i=0;i<r;++i)
        if(ans<b[r-1][i])
            ans=b[r-1][i];
    return ans;
}

int main() {
    int i,j,r;
    cin>>r;
    for(i=0;i<r;++i)
        for(j=0;j<=i;++j)
            cin>>a[i][j];
    cout<<dp(r)<<endl;
    return 0;
}
```