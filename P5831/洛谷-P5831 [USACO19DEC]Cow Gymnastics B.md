# 洛谷-P5831 [USACO19DEC]Cow Gymnastics B

> 原题链接：https://www.luogu.com.cn/problem/P5831

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

为了提高健康水平，奶牛们开始进行体操训练了！Farmer John 选定了他最喜爱的奶牛 Bessie 来执教其他 $N$ 头奶牛，同时评估她们学习不同的体操技术的进度。

$K$ 次训练课的每一次，Bessie 都会根据 $N$ 头奶牛的表现给她们进行排名。之后，她对这些排名的一致性产生了好奇。称一对不同的奶牛是**一致的**，如果其中一头奶牛在每次训练课中都表现得都比另一头要好。

请帮助 Bessie 计算一致的奶牛的对数。

### <a name="输入格式">输入格式</a>

输入的第一行包含两个正整数 $K$ 和 $N$。以下 $K$ 行每行包含整数 $1 \ldots N$ 的某种排列，表示奶牛们的排名（奶牛们用编号 $1 \ldots N$ 进行区分）。如果在某一行中 $A$ 出现在 $B$ 之前，表示奶牛 $A$ 表现得比奶牛 $B$ 要好。

### <a name="输出格式">输出格式</a>

输出一行，包含一致的奶牛的对数。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
3 4
4 1 2 3
4 1 3 2
4 2 1 3
```

#### 输出 #1

```c++
4
```

### <a name="说明/提示">说明/提示</a>

一致的奶牛对为 $(1,4)$、$(2,4)$、$(3,4)$ 和 $(1,3)$。

$1 \leq K \leq 10$，$1 \leq N \leq 20$。

供题：Nick Wu

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int k, n, ans = 0;
    cin >> k >> n;
    int a[k][n], b[n+1][n+1];
    memset(b, 0, sizeof(b));
    for (int i=0; i<k; ++i)
        for (int j=0; j<n; ++j)
            cin >> a[i][j];
    for (int i=0; i<k; ++i)
        for (int j=0; j<n; ++j)
            for (int m=j+1; m<n; ++m)
                ++b[a[i][j]][a[i][m]];
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j)
            if (b[i][j] == k)
                ++ans;
    cout << ans << endl;
    return 0;
}
```