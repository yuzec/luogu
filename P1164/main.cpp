#include <iostream>
using namespace std;

int main() {
    int n,m,a[101],ans[10001]={1};
    cin>>n>>m;
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<n;++i)
        for(int j=m;j>=a[i];--j)
            ans[j]+=ans[j-a[i]];
    cout<<ans[m]<<endl;
    return 0;
}
