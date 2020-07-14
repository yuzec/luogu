#include <iostream>
#include <cstring>
using namespace std;
#define max(x,y) ((x)>(y)?(x):(y))

int main() {
    int t,m;
    cin>>t>>m;
    int a[m],b[m],f[t+1];
    memset(f,0,sizeof(f));
    for(int i=0;i<m;++i)
        cin>>a[i]>>b[i];
    for(int i=0;i<m;++i)
        for(int j=a[i];j<=t;++j)
            f[j]=max(f[j],f[j-a[i]]+b[i]);
    cout<<f[t]<<endl;
    return 0;
}
