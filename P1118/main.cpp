#include <iostream>
using namespace std;

int n,sum,p[13][13],ans[13],flag[13];

bool dfs(int m, int s) {
    if(m==n)
        return s==sum;
    for(int i=1;i<=n;++i) {
        if(flag[i])
            continue;
        ans[m]=i;
        flag[i]=1;
        s+=i*p[n][m+1];
        if(s<=sum&&dfs(m+1,s))
            return true;
        flag[i]=0;
        s-=i*p[n][m+1];
    }
    return 0;
}

int main() {
    cin>>n>>sum;
    p[0][1]=1;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=i;++j)
            p[i][j]=p[i-1][j-1]+p[i-1][j];
    if(dfs(0,0)) {
        for(int i=0;i<n;++i)
            cout<<ans[i]<<' ';
        cout<<endl;
    }
    return 0;
}
