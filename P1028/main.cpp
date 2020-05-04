#include <iostream>
using namespace std;

int ans[1005];

int dp(int n) {
    int i,sum=1;
    for(i=1;i<=n/2;++i)
        sum+=ans[i];
    return sum;
}

int main() {
    int n,i;
    cin>>n;
    ans[1]=1;
    for(i=1;i<=n;++i)
        ans[i]=dp(i);
    cout<<ans[n]<<endl;
    return 0;
}
