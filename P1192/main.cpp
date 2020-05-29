#include <iostream>
using namespace std;

int n,k,a[100001];

int solve(int x) {
    if(x==n)
        return 1;
    if(a[x])
        return a[x];
    for(int i=1;i<=k&&x+i<=n;++i)
        a[x]+=solve(x+i);
    a[x]%=100003;
    return a[x];
}

int main() {
    cin>>n>>k;
    cout<<solve(0)<<endl;
    return 0;
}
