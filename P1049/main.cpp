#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int V,n;
    cin>>V>>n;
    int v[n],f[V+1];
    memset(f,0,sizeof(f));
    for(int i=0;i<n;++i)
        cin>>v[i];
    for(int i=0;i<n;++i)
        for(int j=V;j>=v[i];--j)
            f[j]=max(f[j],f[j-v[i]]+v[i]);
    cout<<V-f[V]<<endl;
    return 0;
}
