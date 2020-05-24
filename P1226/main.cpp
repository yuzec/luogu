#include <iostream>
using namespace std;
#define ll long long

ll mypow(ll b, ll p, ll k) {
    if(p==1)
        return b%k;
    else if(p==0)
        return 1%k;
    ll ans;
    b%=k;
    if(p%2==0) {
        ans=mypow(b,p/2,k)%k;
        return ans*ans%k;
    }else{
        ans=mypow(b,(p-1)/2,k)%k;
        return ans*ans*b%k;
    }
}

int main() {
    ll b,p,k,ans;
    cin>>b>>p>>k;
    ans=mypow(b,p,k);
    cout<<b<<'^'<<p<<" mod "<<k<<'='<<ans<<endl;
    return 0;
}
