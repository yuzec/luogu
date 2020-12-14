# 洛谷-P3612 [USACO17JAN]Secret Cow Code S

> 原题链接：https://www.luogu.com.cn/problem/P3612

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

The cows  are experimenting with secret codes, and have devised a method for  creating an infinite-length string to be used as part of one of their  codes.

Given a string $s$, let $F(s)$ be $s$ followed by $s$ "rotated" one character to the right (in a right rotation, the last character of $s$ rotates around and becomes the new first character). Given an initial string $s$, the cows build their infinite-length code string by repeatedly applying $F$; each step therefore doubles the length of the current string.

Given the initial string and an index $N$, please help the cows compute the character at the $N$th position within the infinite code string.

奶牛正在试验秘密代码，并设计了一种方法来创建一个无限长的字符串作为其代码的一部分使用。

给定一个字符串，让后面的字符旋转一次（每一次正确的旋转，最后一个字符都会成为新的第一个字符）。也就是说，给定一个初始字符串，之后的每一步都会增加当前字符串的长度。

给定初始字符串和索引，请帮助奶牛计算无限字符串中位置N的字符。

### <a name="输入格式">输入格式</a>

The input consists of a single line containing a string followed by $N$. The string consists of at most 30 uppercase characters, and $N \leq 10^{18}$.

Note that $N$ may be too large to fit into a standard 32-bit integer, so you may want to use a 64-bit integer type (e.g., a "long long" in C/C++).

第一行输入一个字符串。该字符串包含最多30个大写字母，并 $N \leq 10^{18}$ 。

第二行输入N。请注意，数据可能很大，放进一个标准的32位整数可能不够，所以你可能要使用一个64位的整数类型（例如，在C / C++ 中是 long long）。

### <a name="输出格式">输出格式</a>

Please output the $N$th character of the infinite code built from the initial string. The first character is $N=1$.

请输出从初始字符串生成的无限字符串中的位置的字符。第一个字符是 $N=1$.。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
COW 8
```

#### 输出 #1

```c++
C
```

### <a name="说明/提示">说明/提示</a>

In this example, the initial string COW expands as follows:

COW -> COWWCO -> COWWCOOCOWWC

12345678

感谢@y_z_h 的翻译

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    string s;
    long long n, l;
    cin >> s >> n;
    int i;
    --n;
    while (s.size() <= n) {
        for (i=0; s.size() * pow(2, i) <= n; ++i);
        l = s.size() * pow(2, i-1);
        n = (n + l - 1) % l;
    }
    cout << s[n] << endl;
    return 0;
}
```