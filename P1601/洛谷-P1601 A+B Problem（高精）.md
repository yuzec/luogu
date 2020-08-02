# 洛谷-P1601 A+B Problem（高精）

> 原题链接：https://www.luogu.com.cn/problem/P1601

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

高精度加法，相当于a+b problem，**不用考虑负数**.

### <a name="输入格式">输入格式</a>

分两行输入。$a,b \leq 10^{500}$

### <a name="输出格式">输出格式</a>

输出只有一行，代表$a+b$的值

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
1
1
```

#### 输出 #1

```c++
2
```

#### 输入 #2

```c++
1001
9099
```

#### 输出 #2

```c++
10100
```

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cstring>
using namespace std;

string add(string x, string y) {
    int lenx = x.size();
    int leny = y.size();
    if (lenx > leny)
        for (int i=0; i<lenx-leny; ++i)
            y = '0' + y;
    else
        for (int i=0; i<leny-lenx; ++i)
            x = '0' + x;
    int jw = 0;
    for (int i=max(lenx, leny)-1; i>=0; --i) {
        x[i] += (y[i] - '0') + jw;
        jw = (x[i] - '0') / 10;
        x[i] = (x[i] - '0') % 10 + '0';
    }
    if (jw != 0)
        x = char(jw + '0') + x;
    return x;
}

int main() {
    string a, b, c;
    cin >> a >> b;
    c = add(a, b);
    cout << c << endl;
    return 0;
}
```