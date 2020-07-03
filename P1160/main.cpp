#include <iostream>
using namespace std;

struct node {
    int l,r;
}q[100003];

void addLeft(int x, int pos) {
    q[x].r=pos;
    q[q[pos].l].r=x;
    q[x].l=q[pos].l;
    q[pos].l=x;
}

void addRight(int x, int pos) {
    q[x].l=pos;
    q[q[pos].r].l=x;
    q[x].r=q[pos].r;
    q[pos].r=x;
}

void del(int x) {
    if(q[x].l==-1)
        return ;
    q[q[x].l].r=q[x].r;
    q[q[x].r].l=q[x].l;
    q[x].l=q[x].r=-1;
}

int main() {
    int n,m,i,k,p,x;
    for(i=1;i<=n;++i)
        q[i].l=q[i].r=-1;
    q[1].r=-1;q[1].l=0;q[0].r=1;
    cin>>n;
    for(i=2;i<=n;++i) {
        cin>>k>>p;
        if(!p)
            addLeft(i,k);
        else
            addRight(i,k);
    }
    cin>>m;
    for(i=1;i<=m;++i) {
        cin>>x;
        del(x);
    }
    i=q[0].r;
    while(i!=-1) {
        cout<<i<<' ';
        i=q[i].r;
    }
    cout<<endl;
    return 0;
}
