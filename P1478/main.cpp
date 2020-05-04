#include <iostream>
using namespace std;

int main() {
    int n,s,a,b,i,j,ans=0;
    cin>>n>>s>>a>>b;
    int x[n],y[n];
    for(i=0;i<n;++i)
        cin>>x[i]>>y[i];
    for(i=0;i<n;++i)
        for(j=i+1;j<n;++j)
            if(y[i]>y[j]) {
                swap(y[i],y[j]);
                swap(x[i],x[j]);
            }
    for(i=0;i<n;++i)
        if(x[i]<=a+b&&s>=y[i]) {
            s-=y[i];
            ++ans;
        }
    cout<<ans<<endl;
    return 0;
}
