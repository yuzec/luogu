#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int m,n,i,j,k=0,flag,ans=0;
    cin>>m>>n;
    int p[n],buffer[m];
    memset(buffer,-1,sizeof(buffer));
    for(i=0;i<n;++i)
        cin>>p[i];
    for(i=0;i<n;++i) {
        flag=0;
        for(j=0;j<m&&buffer[j]!=-1;++j)
            if(p[i]==buffer[j]) {
                flag=1;
                break;
            }
        if(flag==0) {
            if(k>=m)
                k%=m;
            buffer[k++]=p[i];
            ++ans;
        }
    }
    cout<<ans<<endl;
    return 0;
}
