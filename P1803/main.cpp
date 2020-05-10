#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int s;
    int e;
    bool operator<(const node &t)const{
        return e<t.e;
    }
}c[1000000];

int main() {
    int n,i,time,ans=1;
    cin>>n;
    for(i=0;i<n;++i)
        cin>>c[i].s>>c[i].e;
    sort(c,c+n);
    time=c[0].e;
    for(i=1;i<n;++i)
        if(c[i].s>=time) {
            time=c[i].e;
            ++ans;
        }
    cout<<ans<<endl;
    return 0;
}
