#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int w,n,i,j,k,ans=0;
    cin>>w>>n;
    int p[n];
    for(i=0;i<n;++i)
        cin>>p[i];
    sort(p,p+n);
    for(i=n-1;i>=0;--i) {
        if(p[i]==0)
            continue;
        k=-1;
        for(j=0;p[j]+p[i]<=w&&j<i;++j)
            if(p[j]!=0)
                k=j;
        if(k!=-1)
            p[k]=0;
        p[i]=0;
        ++ans;
    }
    cout<<ans<<endl;
    return 0;
}
