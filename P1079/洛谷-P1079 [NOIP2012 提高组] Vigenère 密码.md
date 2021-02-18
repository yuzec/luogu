# 洛谷-P1079 [NOIP2012 提高组] Vigenère 密码

> 原题链接：https://www.luogu.com.cn/problem/P1079

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

16 世纪法国外交家 Blaise de Vigenère 设计了一种多表密码加密算法 Vigenère 密码。Vigenère 密码的加密解密算法简单易用，且破译难度比较高，曾在美国南北战争中为南军所广泛使用。

在密码学中，我们称需要加密的信息为明文，用 $M$ 表示；称加密后的信息为密文，用 $C$ 表示；而密钥是一种参数，是将明文转换为密文或将密文转换为明文的算法中输入的数据，记为 $k$。 在 Vigenère 密码中，密钥 $k$ 是一个字母串，$k=k_1,k_2,…,k_n$。当明文 $M=m_1,m_2,…,m_n$ 时，得到的密文 $C=c_1,c_2,…,c_n$，其中 $c_i$=$m_i$®$k_i$，运算®的规则如下表所示：

![img](https://cdn.luogu.com.cn/upload/pic/30.png)

Vigenère 加密在操作时需要注意：

1. ®运算忽略参与运算的字母的大小写，并保持字母在明文 $M$ 中的大小写形式；
2. 当明文 $M$ 的长度大于密钥 $k$ 的长度时，将密钥 $k$ 重复使用。

例如，明文 $M=\texttt{Helloworld}$，密钥 $k=\texttt{abc}$ 时，密文 $C=\texttt{Hfnlpyosnd}$。

![img](https://cdn.luogu.com.cn/upload/pic/31.png)

### <a name="输入格式">输入格式</a>

共 2 行。

第一行为一个字符串，表示密钥 $k$，长度不超过 $100$，其中仅包含大小写字母。

第二行为一个字符串，表示经加密后的密文，长度不超过 $1000$，其中仅包含大小写字母。

### <a name="输出格式">输出格式</a>

一个字符串，表示输入密钥和密文所对应的明文。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
CompleteVictory
Yvqgpxaimmklongnzfwpvxmniytm
```

#### 输出 #1

```c++
Wherethereisawillthereisaway
```

### <a name="说明/提示">说明/提示</a>

对于 $100\%$ 的数据，输入的密钥的长度不超过 $100$，输入的密文的长度不超过 $1000$，且都仅包含英文字母。

NOIP 2012 提高组 第一天 第一题

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string k, c, m;
    cin >> k >> c;
    m = c;
    int len = k.size();
    for (int i=0; i<len; ++i)
        k[i] = toupper(k[i]);
    for (int i=0; i<c.size(); ++i) {
        m[i] = (c[i]>='a')?'a':'A';
        c[i] = toupper(c[i]);
        m[i] += (c[i] - k[i%len] + 26) % 26;
    }
    cout << m << endl;
    return 0;
}
```