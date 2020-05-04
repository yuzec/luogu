# 洛谷-P1464 Function

> 原题链接：https://www.luogu.com.cn/problem/P1464

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

对于一个递归函数w(a,b,c)

- 如果a&le;0 or b&le;0 or c&le;0就返回值1.
- 如果a>20 or b>20 or c>20就返回w(20,20,20)
- 如果a<b并且b<c 就返回w(a,b,c−1)+w(a,b−1,c−1)−w(a,b−1,c)
- 其它的情况就返回w(a−1,b,c)+w(a−1,b−1,c)+w(a−1,b,c−1)−w(a−1,b−1,c−1)

这是个简单的递归函数，但实现起来可能会有些问题。当a,b,c均为15时，调用的次数将非常的多。你要想个办法才行.

/* absi2011 : 比如 w(30,−1,0)既满足条件1又满足条件2

这种时候我们就按最上面的条件来算

所以答案为1

*/

### <a name="输入格式">输入格式</a>

会有若干行。

并以−1,−1,−1结束。

保证输入的数在[−9223372036854775808,9223372036854775807]之间，并且是整数。

### <a name="输出格式">输出格式</a>

输出若干行，每一行格式：

```
w(a, b, c) = ans
```

注意空格。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
1 1 1
2 2 2
-1 -1 -1
```

#### 输出 #1

```c++
w(1, 1, 1) = 2
w(2, 2, 2) = 4
```

### <a name="说明/提示">说明/提示</a>

记忆化搜索

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
using namespace std;

int ans[25][25][25]={1};

int w(long int a, long int b, long int c) {
    if(a<=0||b<=0||c<=0)
        return 1;
    if(a>20||b>20||c>20) {
        if(ans[20][20][20]==0)
            ans[20][20][20]=w(20,20,20);
        return ans[20][20][20];
    }
    if(a<b&&b<c) {
        if(ans[a][b][c]!=0)
            return ans[a][b][c];
        if(ans[a][b][c-1]==0)
            ans[a][b][c-1]=w(a,b,c-1);
        if(ans[a][b-1][c-1]==0)
            ans[a][b-1][c-1]=w(a,b-1,c-1);
        if(ans[a][b-1][c]==0)
            ans[a][b-1][c]=w(a,b-1,c);
        ans[a][b][c]=ans[a][b][c-1]+ans[a][b-1][c-1]-ans[a][b-1][c];
        return ans[a][b][c];
    }
    if(ans[a][b][c]!=0)
        return ans[a][b][c];
    if(ans[a-1][b][c]==0)
        ans[a-1][b][c]=w(a-1,b,c);
    if(ans[a-1][b-1][c]==0)
        ans[a-1][b-1][c]=w(a-1,b-1,c);
    if(ans[a-1][b][c-1]==0)
        ans[a-1][b][c-1]=w(a-1,b,c-1);
    if(ans[a-1][b-1][c-1]==0)
        ans[a-1][b-1][c-1]=w(a-1,b-1,c-1);
    ans[a][b][c]=ans[a-1][b][c]+ans[a-1][b-1][c]+ans[a-1][b][c-1]-ans[a-1][b-1][c-1];
    return ans[a][b][c];
}

int main() {
    long int a,b,c;
    while(true) {
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1)
            return 0;
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
    }
    return 0;
}
```