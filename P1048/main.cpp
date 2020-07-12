#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t,m;
    cin>>t>>m;
    int time[m],value[m],f[t+1];
    memset(f,0,sizeof(f));
    for(int i=0;i<m;++i)
        cin>>time[i]>>value[i];
    for(int i=0;i<m;++i)
        for(int j=t;j>=time[i];--j)
            f[j]=max(f[j],f[j-time[i]]+value[i]);
    cout<<f[t]<<endl;
    return 0;
}
