#include <iostream>
using namespace std;

int n;
char tree[30][3];

void dfs(int k) {
    cout<<tree[k][0];
    int i;
    if(tree[k][1]!='*') {
        for(i=0;tree[k][1]!=tree[i][0]&&i<n;++i);
        dfs(i);
    }
    if(tree[k][2]!='*') {
        for(i=0;tree[k][2]!=tree[i][0]&&i<n;++i);
        dfs(i);
    }
}

int main() {
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>tree[i][0]>>tree[i][1]>>tree[i][2];
    dfs(0);
    cout<<endl;
    return 0;
}
