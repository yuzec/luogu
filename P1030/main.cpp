#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int l;
char a[10],b[10];
queue<char> q;

void dfs(int s, int e, int pos) {
    if(e-s==1) {
        q.push(a[s]);
        return ;
    }
    for(int i=pos-1;i>=0;--i)
        for(int j=s;j<e;++j)
            if(a[j]==b[i]) {
                q.push(a[j]);
                dfs(s,j,i);
                dfs(j+1,e,i);
                return ;
            }
}

int main() {
    cin>>a>>b;
    l=strlen(a);
    dfs(0,l,l);
    while(!q.empty()) {
        cout<<q.front();
        q.pop();
    }
    cout<<endl;
    return 0;
}
