#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct node {
    int id;
    int t;
    bool operator<(const node &y)const{
        if(y.t==t)
            return id<y.id;
        return t<y.t;
    }
}p[1000];

int main() {
    int n,i,time=0;
    double ans=0;
    cin>>n;
    for(i=0;i<n;++i) {
        p[i].id=i+1;
        cin>>p[i].t;
    }
    sort(p,p+n);
    for(i=0;i<n;++i) {
        cout<<p[i].id<<' ';
        ans+=time;
        time+=p[i].t;
    }
    printf("\n%.2f\n",ans/n);
    return 0;
}
