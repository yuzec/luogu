#include <iostream>
using namespace std;

int a[1000005];

int dp(int n, int x) {
    a[n]=(n%10==x)?a[n/10]+1:a[n/10];
    return a[n];
}

int main() {
    int n,x,sum=0;
    cin>>n>>x;
    for(int i=1;i<=n;++i)
        sum+=dp(i,x);
    cout<<sum<<endl;
    return 0;
}
