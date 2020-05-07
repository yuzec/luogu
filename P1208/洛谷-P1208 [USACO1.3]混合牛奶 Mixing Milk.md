# 洛谷-P1208 [USACO1.3]混合牛奶 Mixing Milk

> 原题链接：https://www.luogu.com.cn/problem/P1208

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

由于乳制品产业利润很低，所以降低原材料（牛奶）价格就变得十分重要。帮助 Marry 乳业找到最优的牛奶采购方案。

Marry 乳业从一些奶农手中采购牛奶，并且每一位奶农为乳制品加工企业提供的价格是不同的。此外，就像每头奶牛每天只能挤出固定数量的奶，每位奶农每天能提供的牛奶数量是一定的。每天 Marry 乳业可以从奶农手中采购到小于或者等于奶农最大产量的整数数量的牛奶。

给出 Marry 乳业每天对牛奶的需求量，还有每位奶农提供的牛奶单价和产量。计算采购足够数量的牛奶所需的最小花费。

注：每天所有奶农的总产量大于 Marry 乳业的需求量。

### <a name="输入格式">输入格式</a>

第一行二个整数 n,m，表示需要牛奶的总量，和提供牛奶的农民个数。

接下来 m 行，每行两个整数 $p_i,a_i$，表示第 i 个农民牛奶的单价，和农民 i 一天最多能卖出的牛奶量。

### <a name="输出格式">输出格式</a>

单独的一行包含单独的一个整数，表示 Marry 的牛奶制造公司拿到所需的牛奶所要的最小费用。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 # 1

```c++
100 5
5 20
9 40
3 10
8 80
6 30
```

#### 输出 #1

```c++
630
```

### <a name="说明/提示">说明/提示</a>

【数据范围】
 对于 100% 的数据：
 $0 \le n,a_i \le 2 \times 10^6$，$0\le m \le 5000$，$0 \le p_i \le 1000$

题目翻译来自 NOCOW。

USACO Training Section 1.3

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int p;
    int a;
    bool operator<(const node &t)const{
        if(t.p==p)
            return a>t.a;
        return p<t.p;
    }
}milk[5000];

int main() {
    int n,m,i,sum=0,ans=0;
    cin>>n>>m;
    for(i=0;i<m;++i)
        cin>>milk[i].p>>milk[i].a;
    sort(milk,milk+m);
    for(i=0;i<m;++i)
        if(milk[i].a+sum<n) {
            sum+=milk[i].a;
            ans+=milk[i].a*milk[i].p;
        }else{
            ans+=(n-sum)*milk[i].p;
            break;
        }
    cout<<ans<<endl;
    return 0;
}
```