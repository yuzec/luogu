#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool cmp(string x, string y) {
    int i,j,lenx=x.size(),leny=y.size();
    for(i=0,j=0;!(x[i]!=y[j]||i==lenx-1&&j==leny-1);++i%=lenx,++j%=leny);
    return x[i]>y[j];
}

int main() {
    int n,i;
    cin>>n;
    string a[n],ans;
    for(i=0;i<n;++i)
        cin>>a[i];
    sort(a,a+n,cmp);
    for(i=0;i<n;++i)
        ans+=a[i];
    cout<<ans<<endl;
    return 0;
}
