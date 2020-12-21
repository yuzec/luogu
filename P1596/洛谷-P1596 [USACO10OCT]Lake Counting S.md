# 洛谷-P1596 [USACO10OCT]Lake Counting S

> 原题链接：https://www.luogu.com.cn/problem/P1596

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

Due to  recent rains, water has pooled in various places in Farmer John's field, which is represented by a rectangle of N x M (1 <= N <= 100; 1  <= M <= 100) squares. Each square contains either water ('W') or  dry land ('.'). Farmer John would like to figure out how many ponds have formed in his field. A pond is a connected set of squares with water in them, where a square is considered adjacent to all eight of its  neighbors. Given a diagram of Farmer John's field, determine how many  ponds he has.

由于近期的降雨，雨水汇集在农民约翰的田地不同的地方。我们用一个NxM(1<=N<=100;1<=M<=100)网格图表示。每个网格中有水('W')  或是旱地('.')。一个网格与其周围的八个网格相连，而一组相连的网格视为一个水坑。约翰想弄清楚他的田地已经形成了多少水坑。给出约翰田地的示意图，确定当中有多少水坑。

### <a name="输入格式">输入格式</a>

Line 1: Two space-separated integers: N and M * Lines 2..N+1: M characters per line representing one row of Farmer John's field. Each character is either  'W' or '.'. The characters do not have spaces between them.

第1行：两个空格隔开的整数：N 和 M 第2行到第N+1行：每行M个字符，每个字符是'W'或'.'，它们表示网格图中的一排。字符之间没有空格。

### <a name="输出格式">输出格式</a>

Line 1: The number of ponds in Farmer John's field.

一行：水坑的数量

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
10 12
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
```

#### 输出 #1

```c++
3
```

### <a name="说明/提示">说明/提示</a>

OUTPUT DETAILS: There are three ponds: one in the upper left, one in the lower left, and one along the right side.

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
using namespace std;

char a[105][105];
int n, m, ans, dir[][2]={{-1, -1}, {-1, 0}, {-1, 1},
    {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

void dfs(int x, int y) {
    int dx, dy;
    a[x][y] = '.';
    for (int i=0; i<8; ++i) {
        dx = x + dir[i][0];
        dy = y + dir[i][1];
        if (dx>=0&&dx<n&&dy>=0&&dy<m&&a[dx][dy]=='W')
            dfs(dx, dy);
    }
}


int main() {
    cin >> n >> m;
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            cin >> a[i][j];
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            if (a[i][j] == 'W') {
                dfs(i, j);
                ++ans;
            }
    cout << ans << endl;
    return 0;
}
```