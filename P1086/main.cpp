#include <iostream>
#include <cmath>
using namespace std;

int m,n,k,x,y,ans,a[20][20];

void maxA() {
    for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            if(a[i][j]>a[x][y]) {
                x=i;y=j;
            }
}

void dfs(int t, int xx, int yy) {
    maxA();
    int tt=abs(x-xx)+abs(y-yy)+1;
    if(tt+t+x+1>k||a[x][y]==0)
       return ; 
    else {
        ans+=a[x][y];
        a[x][y]=0;
        dfs(t+tt,x,y);
    }
}

int main() {
    cin>>m>>n>>k;
    for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            cin>>a[i][j];
    maxA();
    dfs(0,-1,y);
    cout<<ans<<endl;
    return 0;
}
