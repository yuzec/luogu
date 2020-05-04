#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cin>>n;
    int v[n],ans[n]={0};
    for(i=0;i<n;++i)
        cin>>v[i];
    for(i=0;i<n;++i)
        for(j=0;j<i;++j)
            if(v[i]>v[j])
                ++ans[i];
    for(i=0;i<n;++i)
        cout<<ans[i]<<' ';
    cout<<endl;
    return 0;
}
