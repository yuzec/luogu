#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int p;
    int a;
    bool operator<(const node &t)const{
        if(t.p==p)
            return a>t.a;
        return p<t.p;
    }
}milk[5000];

int main() {
    int n,m,i,sum=0,ans=0;
    cin>>n>>m;
    for(i=0;i<m;++i)
        cin>>milk[i].p>>milk[i].a;
    sort(milk,milk+m);
    for(i=0;i<m;++i)
        if(milk[i].a+sum<n) {
            sum+=milk[i].a;
            ans+=milk[i].a*milk[i].p;
        }else{
            ans+=(n-sum)*milk[i].p;
            break;
        }
    cout<<ans<<endl;
    return 0;
}
