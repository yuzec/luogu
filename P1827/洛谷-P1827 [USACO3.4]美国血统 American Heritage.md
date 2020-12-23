# 洛谷-P1827 [USACO3.4]美国血统 American Heritage

> 原题链接：https://www.luogu.com.cn/problem/P1827

- [题目描述](#题目描述)
- [输入格式](#输入格式)
- [输出格式](#输出格式)
- [输入输出样例](#输入输出样例)
- [说明/提示](#说明/提示)
- [C++代码](#C++代码)

---

### <a name="题目描述">题目描述</a>

农夫约翰非常认真地对待他的奶牛们的血统。然而他不是一个真正优秀的记帐员。他把他的奶牛 们的家谱作成二叉树，并且把二叉树以更线性的“树的中序遍历”和“树的前序遍历”的符号加以记录而 不是用图形的方法。

你的任务是在被给予奶牛家谱的“树中序遍历”和“树前序遍历”的符号后，创建奶牛家谱的“树的  后序遍历”的符号。每一头奶牛的姓名被译为一个唯一的字母。（你可能已经知道你可以在知道树的两  种遍历以后可以经常地重建这棵树。）显然，这里的树不会有多于 26 个的顶点。  这是在样例输入和 样例输出中的树的图形表达方式：

```
　　　　　　　　 C
　　　　　　   /  \
　　　　　　  /　　\
　　　　　　 B　　  G
　　　　　　/ \　　/
　　　　   A   D  H
　　　　　　  / \
　　　　　　 E   F
```

树的中序遍历是按照左子树，根，右子树的顺序访问节点。

树的前序遍历是按照根，左子树，右子树的顺序访问节点。

树的后序遍历是按照左子树，右子树，根的顺序访问节点。

### <a name="输入格式">输入格式</a>

第一行： 树的中序遍历

第二行： 同样的树的前序遍历

### <a name="输出格式">输出格式</a>

单独的一行表示该树的后序遍历。

### <a name="输入输出样例">输入输出样例</a>

#### 输入 #1

```c++
ABEDFCHG
CBADEFGH 
```

#### 输出 #1

```c++
AEFDBHGC
```

### <a name="说明/提示">说明/提示</a>

题目翻译来自NOCOW。

USACO Training Section 3.4

### <a name="C++代码">C++代码</a>

```c++
#include <iostream>
#include <cstring>
using namespace std;

string a, b;

void dfs(int as, int ae, int bs, int be) {
    if (as > ae || bs > be)
        return ;
    for (int i=as; i<=ae; ++i)
        if (a[i] == b[bs]) {
            dfs(as, i-1, bs+1, bs+i-as);
            dfs(i+1, ae, bs+i-as+1, be);
            cout << a[i];
        }
}

int main() {
    cin >> a >> b;
    int l = a.size();
    dfs(0, l-1, 0, l-1);
    cout << endl;
    return 0;
}
```