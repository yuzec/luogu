# 洛谷-P3741 honoka的键盘

> 原题链接：https://www.luogu.com.cn/problem/P3741

- [题目背景](#题目背景)
- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目背景">题目背景</a>

honoka 有一个只有两个键的键盘。

### <a name="题目描述">题目描述</a>

一天，她打出了一个只有这两个字符的字符串。当这个字符串里含有 `VK` 这个字符串的时候，honoka 就特别喜欢这个字符串。所以，她想改变至多一个字符（或者不做任何改变）来最大化这个字符串内 `VK` 出现的次数。给出原来的字符串，请计算她最多能使这个字符串内出现多少次 `VK`（只有当 `V` 和 `K` 正好相邻时，我们认为出现了 `VK`。）

### <a name="输入格式">输入格式</a>

第一行给出一个数字 $n$，代表字符串的长度。

第二行给出一个字符串 $s$。

### <a name="输出格式">输出格式</a>

第一行输出一个整数代表所求答案。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
2
VK
```

#### 输出 #1

```c++
1
```

#### 输入 #2

```c++
2
VV
```

#### 输出 #2

```c++
1
```

#### 输入 #3

```c++
1
V
```

#### 输出 #3

```c++
0
```

#### 输入 #4

```c++
20
VKKKKKKKKKVVVVVVVVVK
```

#### 输出 #4

```c++
3
```

#### 输入 #5

```c++
4
KVKV
```

#### 输出 #5

```c++
1
```

### <a name="说明/提示">说明/提示</a>

对于 $100\%$ 的数据，$1\le n\le 100$。

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cstring>
using namespace std;

int n;
char c[105];

int countVK() {
    int ans = 0;
    for (int i=0; i<n-1; ++i)
        if (c[i] == 'V' && c[i+1] == 'K')
            ++ans;
    return ans;
}

int main() {
    cin >> n >> c;
    int ans = countVK();
    for (int i=0; i<n-1; ++i)
        if (c[i] == c[i+1])
            if (c[i] == 'V') {
                c[i+1] = 'K';
                ans = max(ans, countVK());
                c[i+1] = 'V';
            } else {
                c[i] = 'V';
                ans = max(ans, countVK());
                c[i] = 'K';
            }
    cout << ans << endl;
    return 0;
}
```