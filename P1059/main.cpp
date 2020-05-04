#include <iostream>
using namespace std;

int main() {
    int n,i,j=0;
    cin>>n;
    int a[n],ans[1001]={0};
    for(i=0;i<n;++i)
        cin>>a[i];
    for(i=0;i<n;++i)
        ans[a[i]]=1;
    for(i=0;i<1001;++i)
        if(ans[i]==1)
            a[j++]=i;
    cout<<j<<endl;
    for(i=0;i<j;++i)
        cout<<a[i]<<' ';
    cout<<endl;
    return 0;
}
