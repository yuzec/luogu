#include <iostream>
#include <cmath>
using namespace std;
#define max(x,y) ((x)>(y)?(x):(y))

int main() {
    int m,t,s,ans;
    cin>>m>>t>>s;
    if(t==0)
        cout<<0<<endl;
    else {
        ans=max(m-ceil(s*1.0/t),0);
        cout<<ans<<endl;
    }
    return 0;
}
