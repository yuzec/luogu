# 洛谷-P1219 [USACO1.5]八皇后 Checker Challenge

> 原题链接：https://www.luogu.com.cn/problem/P1219

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

一个如下的 $6 \times 6$ 的跳棋棋盘，有六个棋子被放置在棋盘上，使得每行、每列有且只有一个，每条对角线（包括两条主对角线的所有平行线）上至多有一个棋子。

![img](https://cdn.luogu.com.cn/upload/pic/60.png)

上面的布局可以用序列 2 4 6 1 3 5 来描述，第 i 个数字表示在第 i 行的相应位置有一个棋子，如下：

行号 1 2 3 4 5 6

列号 2 4 6 1 3 5

这只是棋子放置的一个解。请编一个程序找出所有棋子放置的解。
 并把它们以上面的序列方法输出，解按字典顺序排列。
 请输出前 3 个解。最后一行是解的总个数。

### <a name="输入格式">输入格式</a>

一行一个正整数 n，表示棋盘是 $n \times n$ 大小的。

### <a name="输出格式">输出格式</a>

前三行为前三个解，每个解的两个数字之间用一个空格隔开。第四行只有一个数字，表示解的总数。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
6
```

#### 输出 #1

```c++
2 4 6 1 3 5
3 6 2 5 1 4
4 1 5 2 6 3
4
```

### <a name="说明/提示">说明/提示</a>

【数据范围】
 对于 100% 的数据，$6 \le n \le 13$。

题目翻译来自NOCOW。

USACO Training Section 1.5

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
using namespace std;

int n,ans,a[14];
bool flag[3][28];

void dfs(int i) {
    if(i>n) {
        ++ans;
        if(ans<=3) {
            for(int j=1;j<=n;++j)
                cout<<a[j]<<' ';
            cout<<endl;
        }
        return ;
    }
    for(int j=1;j<=n;++j)
        if((!flag[0][j])&&(!flag[1][i+j])&&(!flag[2][i-j+n])) {
            a[i]=j;
            flag[0][j]=1;
            flag[1][i+j]=1;
            flag[2][i-j+n]=1;
            dfs(i+1);
            flag[0][j]=0;
            flag[1][i+j]=0;
            flag[2][i-j+n]=0;
        }
}

int main() {
    cin>>n;
    dfs(1);
    cout<<ans<<endl;
    return 0;
}
```