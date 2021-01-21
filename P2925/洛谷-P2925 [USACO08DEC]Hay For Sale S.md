# 洛谷-P2925 [USACO08DEC]Hay For Sale S

> 原题链接：https://www.luogu.com.cn/problem/P2925

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [题意翻译](#题意翻译)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

Farmer John suffered a terrible loss when giant Australian cockroaches ate the  entirety of his hay inventory, leaving him with nothing to feed the  cows. He hitched up his wagon with capacity C (1 <= C <= 50,000)  cubic units and sauntered over to Farmer Don's to get some hay before  the cows miss a meal.

Farmer Don had a wide variety of H (1 <= H <= 5,000) hay bales  for sale, each with its own volume (1 <= V_i <= C). Bales of hay,  you know, are somewhat flexible and can be jammed into the oddest of  spaces in a wagon.

FJ carefully evaluates the volumes so that he can figure out the largest amount of hay he can purchase for his cows.

Given the volume constraint and a list of bales to buy, what is the  greatest volume of hay FJ can purchase?  He can't purchase partial  bales, of course. Each input line (after the first) lists a single bale  FJ can buy.

约翰遭受了重大的损失：蟑螂吃掉了他所有的干草，留下一群饥饿的牛．他乘着容量为C(1≤C≤50000)个单位的马车，去顿因家买一些干草．  顿因有H(1≤H≤5000)包干草，每一包都有它的体积Vi(l≤Vi≤C).约翰只能整包购买，

他最多可以运回多少体积的干草呢？

### <a name="输入格式">输入格式</a>

\* Line 1: Two space-separated integers: C and H

\* Lines 2..H+1: Each line describes the volume of a single bale: V_i

### <a name="输出格式">输出格式</a>

\* Line 1: A single integer which is the greatest volume of hay FJ can purchase given the list of bales for sale and constraints.

### <a name="题意翻译">题意翻译</a>

```
题目描述
农民john面临一个很可怕的事实，因为防范失措他存储的所有稻草给澳大利亚蟑螂吃光了，他将面临没有稻草喂养奶牛的局面。在奶牛断粮之前，john拉着他的马车到农民Don的农场中买一些稻草给奶牛过冬。已知john的马车可以装的下C(1 <= C <=50,000)立方的稻草。
农民Don有H(1 <= H <= 5,000)捆体积不同的稻草可供购买，每一捆稻草有它自己的体积(1 <= V_i <= C)。面对这些稻草john认真的计算如何充分利用马车的空间购买尽量多的稻草给他的奶牛过冬。
现在给定马车的最大容积C和每一捆稻草的体积Vi，john如何在不超过马车最大容积的情况下买到最大体积的稻草？他不可以把一捆稻草分开来买。

输入输出格式
输入格式：
第一行两个整数，分别为C和H
第2..H+1行:每一行一个整数代表第i捆稻草的体积Vi

输出格式：

一个整数，为john能买到的稻草的体积。
输入输出样例
输入样例#1：
7 3
2
6
5
输出样例#1：
7
```

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
7 3 
2 
6 
5 
```

#### 输出 #1

```c++
7 
```

### <a name="说明/提示">说明/提示</a>

The wagon holds 7 volumetric units; three bales are offered for sale with volumes of 2, 6, and 5 units, respectively.

Buying the two smaller bales fills the wagon.

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
using namespace std;

int f[50005];

int main() {
    int c, h;
    cin >> c >> h;
    int v[h];
    for (int i=0; i<h; ++i)
        cin >> v[i];
    for (int i=0; i<h; ++i)
        for (int j=c; j>=v[i]; --j)
            f[j] = max(f[j], f[j-v[i]]+v[i]);
    cout << f[c] << endl;
    return 0;
}
```