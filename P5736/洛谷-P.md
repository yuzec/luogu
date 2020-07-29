# 洛谷-P5736 【深基7.例2】质数筛

> 原题链接：https://www.luogu.com.cn/problem/P5736

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

输入 $n(n\le100)$ 个不大于 100000 的整数。要求全部储存在数组中，去除掉不是质数的数字，依次输出剩余的质数。

### <a name="输入格式">输入格式</a>

无

### <a name="输出格式">输出格式</a>

无

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
5
3 4 5 6 7
```

#### 输出 #1

```c++
3 5 7
```

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int m) {
    if (m == 0 || m == 1)
        return false;
    for (int i=2; i<=sqrt(m); ++i)
        if (m % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<n; ++i)
        if (isPrime(a[i]))
            cout << a[i] << ' ';
    cout << endl;
    return 0;
}
```