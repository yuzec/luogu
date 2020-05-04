#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int id,w;
}a[20000];

bool cmp(node x, node y) {
    if(x.w!=y.w)
        return x.w>y.w;
    return x.id<y.id;
}

int main() {
    int n,k,i;
    cin>>n>>k;
    int e[10];
    for(i=0;i<10;++i)
        cin>>e[i];
    for(i=0;i<n;++i)
        cin>>a[i].w,a[i].id=i;
    sort(a,a+n,cmp);
    for(i=0;i<n;++i)
        a[i].w+=e[i%10];
    sort(a,a+n,cmp);
    for(i=0;i<k;++i)
        cout<<a[i].id+1<<' ';
    cout<<endl;
    return 0;
}
