#include <iostream>
using namespace std;
#define max(x,y) ((x)>(y)?(x):(y))

int n,m,v[25],p[25],ans[30000];

int main() {
    cin>>n>>m;
    for(int i=0;i<m;++i)
        cin>>v[i]>>p[i];
    for(int i=0;i<m;++i)
        for(int j=n;j>=v[i];--j)
            ans[j]=max(ans[j],ans[j-v[i]]+v[i]*p[i]);
    cout<<ans[n]<<endl;
    return 0;
}
