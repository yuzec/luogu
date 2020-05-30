#include <iostream>
using namespace std;

int n,m,a[31][31];

int solve(int x, int k) {
    if(k==m) {
        if(x==0)
            return 1;
        return 0;
    }
    if(a[x][k]!=-1)
        return a[x][k];
    int l=(x+1)%n,r=(x+n-1)%n;
    if(a[l][k+1]==-1)
        a[l][k+1]=solve(l,k+1);
    if(a[r][k+1]==-1)
        a[r][k+1]=solve(r,k+1);
    a[x][k]=a[l][k+1]+a[r][k+1];
    return a[x][k];
}

int main() {
    cin>>n>>m;
    for(int i=0;i<n;++i)
        for(int j=0;j<=m;++j)
            a[i][j]=-1;
    cout<<solve(0,0)<<endl;
    return 0;
}
