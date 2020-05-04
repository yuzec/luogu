# 洛谷-P1217 [USACO1.5]回文质数 Prime Palindromes

> 原题链接：https://www.luogu.com.cn/problem/P1217

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)
- [题解](#题解)

---

### <a name="题目描述">题目描述</a>

因为 151 既是一个质数又是一个回文数（从左到右和从右到左是看一样的），所以 151 是回文质数。

写一个程序来找出范围 \[a,b\](5&le;a<b&le;100,000,000)( 一亿)间的所有回文质数。

### <a name="输入格式">输入格式</a>

第 1 行: 二个整数 a 和 b .

### <a name="输出格式">输出格式</a>

输出一个回文质数的列表，一行一个。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
5 500
```

#### 输出 #1

```c++
5
7
11
101
131
151
181
191
313
353
373
383
```

### <a name="说明/提示">说明/提示</a>

Hint 1: Generate the palindromes and see if they are prime.

提示 1: 找出所有的回文数再判断它们是不是质数（素数）.

Hint 2: Generate palindromes by combining digits properly. You might need more than one of the loops like below.

提示 2: 要产生正确的回文数，你可能需要几个像下面这样的循环。

题目翻译来自NOCOW。

USACO Training Section 1.5

产生长度为5的回文数:

```cpp
for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
     for (d2 = 0; d2 <= 9; d2++) {
         for (d3 = 0; d3 <= 9; d3++) {
           palindrome = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;//(处理回文数...)
         }
     }
 }
```

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int n) {
    int i,j,p[10];
    for(j=0;n;n/=10)
        p[j++]=n%10;
    for(i=0;i<j/2;++i)
        if(p[i]!=p[j-i-1])
            return false;
    return true;
}

bool isPrime(int n) {
    int sqrtn=sqrt(n);
    for(int i=2;i<=sqrtn;++i)
        if(n%i==0)
            return false;
    return true;
}

int main() {
    int a,b,i,j=0,c[65535];
    cin>>a>>b;
    if(b>10000000)
        b=10000000;
    for(i=(a%2)?a:a+1;i<=b;i+=2)
        if(isPalindrome(i)&&isPrime(i))
            c[j++]=i;
    for(i=0;i<j;++i)
        cout<<c[i]<<endl;
    return 0;
}
```

### <a name="题解">题解</a>

1. 偶数肯定不是质数。
2. 偶数位数回文数（除11）必定不是质数。如果一个回文素数的位数是偶数，则它的奇数位上的数字和与偶数位上的数字和必然相等；根据数的整除性理论，容易判断这样的数肯定能被11整除，所以它就不可能是素数。