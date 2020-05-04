#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int id;
    int s;
    int w;
}player[200000],winner[100000],loser[100000];

bool cmp(node x, node y) {
    if(x.s!=y.s)
        return x.s>y.s;
    return x.id<y.id;
}

int main() {
    int n,r,q,i,j;
    cin>>n>>r>>q;
    for(i=0;i<2*n;++i) {
        player[i].id=i+1;
        cin>>player[i].s;
    }
    for(i=0;i<2*n;++i)
        cin>>player[i].w;
    sort(player,player+2*n,cmp);
    for(i=0;i<r;++i) {
        for(j=0;j<n;++j)
            if(player[2*j].w>player[2*j+1].w) {
                ++player[2*j].s;
                winner[j]=player[2*j];
                loser[j]=player[2*j+1];
            }
            else {
                ++player[2*j+1].s;
                winner[j]=player[2*j+1];
                loser[j]=player[2*j];
            }
        merge(winner,winner+n,loser,loser+n,player,cmp);
    }
    cout<<player[q-1].id<<endl;
    return 0;
}
