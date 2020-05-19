# 洛谷-P1118 [USACO06FEB]Backward Digit Sums G/S

> 原题链接：https://www.luogu.com.cn/problem/P1118

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)
- [题解](#题解)

---

### <a name="题目描述">题目描述</a>

`FJ` and his cows enjoy playing a mental game. They write down the numbers from 1 to $N(1 \le N  \le 10)$ in a certain order and then sum adjacent numbers to produce a new list  with one fewer number.  They repeat this until only a single number is  left.  For example, one instance of the game (when N=4) might go like this:

```cpp
    3   1   2   4
      4   3   6
        7   9
         16
```

Behind `FJ`'s back, the cows have started playing a more  difficult game, in which they try to determine the starting sequence  from only the final total and the number N.  Unfortunately, the game is a bit above `FJ`'s mental arithmetic capabilities.

Write a program to help `FJ` play the game and keep up with the cows.

有这么一个游戏：

写出一个1至N的排列$a_i$，然后每次将相邻两个数相加，构成新的序列，再对新序列进行这样的操作，显然每次构成的序列都比上一次的序列长度少1，直到只剩下一个数字位置。下面是一个例子：

3,1,2,4

4,3,6

7,9

16

最后得到16这样一个数字。

现在想要倒着玩这样一个游戏，如果知道N，知道最后得到的数字的大小sum，请你求出最初序列$a_i$，为1至N的一个排列。若答案有多种可能，则输出字典序最小的那一个。

管理员注：本题描述有误，这里字典序指的是1,2,3,4,5,6,7,8,9,10,11,12

而不是1,10,11,12,2,3,4,5,6,7,8,9

### <a name="输入格式">输入格式</a>

两个正整数n,sum。

### <a name="输出格式">输出格式</a>

输出包括1行，为字典序最小的那个答案。

当无解的时候，请什么也不输出。（好奇葩啊）

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
4 16
```

#### 输出 #1

```c++
3 1 2 4
```

### <a name="说明/提示">说明/提示</a>

对于40%的数据，n≤7；

对于80%的数据，n≤10；

对于100%的数据，n≤12,sum≤12345。

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
using namespace std;

int n,sum,p[13][13],ans[13],flag[13];

bool dfs(int m, int s) {
    if(m==n)
        return s==sum;
    for(int i=1;i<=n;++i) {
        if(flag[i])
            continue;
        ans[m]=i;
        flag[i]=1;
        s+=i*p[n][m+1];
        if(s<=sum&&dfs(m+1,s))
            return true;
        flag[i]=0;
        s-=i*p[n][m+1];
    }
    return 0;
}

int main() {
    cin>>n>>sum;
    p[0][1]=1;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=i;++j)
            p[i][j]=p[i-1][j-1]+p[i-1][j];
    if(dfs(0,0)) {
        for(int i=0;i<n;++i)
            cout<<ans[i]<<' ';
        cout<<endl;
    }
    return 0;
}
```

### <a name="题解">题解</a>

杨辉三角