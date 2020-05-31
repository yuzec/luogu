#include <iostream>
using namespace std;
#define max(x,y) ((x)>(y)?(x):(y))

int a[1001][1001],b[1001][1001];

int dp(int r) {
    int i,j,ans=0;
    b[0][0]=a[0][0];
    for(i=1;i<r;++i)
        for(j=0;j<=i;++j) {
            if(j==0)
                b[i][j]=a[i][j]+b[i-1][j];
            else if(j==i)
                b[i][j]=a[i][j]+b[i-1][j-1];
            else
                b[i][j]=a[i][j]+max(b[i-1][j-1],b[i-1][j]);
        }
    for(i=0;i<r;++i)
        if(ans<b[r-1][i])
            ans=b[r-1][i];
    return ans;
}

int main() {
    int i,j,r;
    cin>>r;
    for(i=0;i<r;++i)
        for(j=0;j<=i;++j)
            cin>>a[i][j];
    cout<<dp(r)<<endl;
    return 0;
}
