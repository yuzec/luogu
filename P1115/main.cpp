#include <iostream>
using namespace std;

int main() {
    int n,i,ans=0,b=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    for(i=0;i<n;++i) {
        b+=a[i];
        if(b>ans)
            ans=b;
        else if(b<0)
            b=0;
    }
    if(ans==0) {
        ans=a[0];
        for(i=1;i<n;++i)
            if(a[i]>ans)
                ans=a[i];
    }
    cout<<ans<<endl;
    return 0;
}
