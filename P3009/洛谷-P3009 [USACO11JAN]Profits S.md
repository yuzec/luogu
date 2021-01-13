# 洛谷-P3009 [USACO11JAN]Profits S

> 原题链接：https://www.luogu.com.cn/problem/P3009

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

The cows  have opened a new business, and Farmer John wants to see how well they  are doing. The business has been running for N (1 <= N <= 100,000) days, and every day i the cows recorded their net profit P_i (-1,000  <= P_i <= 1,000).

Farmer John wants to find the largest total profit that the cows have made during any consecutive time period. (Note that a consecutive time  period can range in length from one day through N days.) Help him by  writing a program to calculate the largest sum of consecutive profits.

奶牛们开始了新的生意，它们的主人约翰想知道它们到底能做得多好。这笔生意已经做了N（1≤N≤100,000）天，每天奶牛们都会记录下这一天的利润Pi（-1,000≤Pi≤1,000）。

约翰想要找到奶牛们在连续的时间期间所获得的最大的总利润。（注：连续时间的周期长度范围从第一天到第N天）。

请你写一个计算最大利润的程序来帮助他。

### <a name="输入格式">输入格式</a>

\* Line 1: A single integer: N

\* Lines 2..N+1: Line i+1 contains a single integer: P_i

### <a name="输出格式">输出格式</a>

\* Line 1: A single integer representing the value of the maximum sum of profits for any consecutive time period.

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
7 
-3 
4 
9 
-2 
-5 
8 
-3 
```

#### 输出 #1

```c++
14 
```

### <a name="说明/提示">说明/提示</a>

The maximum sum is obtained by taking the sum from the second through the sixth number (4, 9, -2, -5, 8) => 14.

感谢@smartzzh 提供的翻译。

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
using namespace std;

int dp[100005];

int main() {
    int n, ans=0;
    cin >> n;
    int p[n];
    for (int i=0; i<n; ++i)
        cin >> p[i];
    dp[0] = p[0]>0?p[0]:0;
    for (int i=1; i<n; ++i) {
        dp[i] += dp[i-1] + p[i];
        if (dp[i] < 0)
            dp[i] = 0;
        if (ans < dp[i])
            ans = dp[i];
    }
    if (ans == 0) {
        ans = p[0];
        for (int i=1; i<n; ++i)
            if (ans < p[i])
                ans = p[i];
    }
    cout << ans << endl;
    return 0;
}
```