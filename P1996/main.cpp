#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n,m,i,j,t;
    queue<int> q;
    cin>>n>>m;
    int ans[n];
    for(i=1;i<=n;++i)
        q.push(i);
    i=j=0;
    while(!q.empty()) {
        i=(i+1)%m;
        t=q.front(),q.pop();
        if(i==0)
            ans[j++]=t;
        else
            q.push(t);
    }
    for(i=0;i<j;++i)
        cout<<ans[i]<<' ';
    cout<<endl;
    return 0;
}
