#include <iostream>
using namespace std;

int main() {
    int n,m,i,t=0,ans=1;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    for(i=0;i<n;++i) {
        t+=a[i];
        if(t>m) {
            ++ans;
            t=a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
