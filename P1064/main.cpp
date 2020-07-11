#include <iostream>
using namespace std;
#define max(x,y) ((x)>(y)?(x):(y))

int v[61][3],p[61][3],f[32001];

int main() {
    int n,m;
    cin>>n>>m;
    for(int vv,pp,q,i=1;i<=m;++i) {
        cin>>vv>>pp>>q;
        if(!q) {
            v[i][0]=vv;
            p[i][0]=pp;
        }else{
            if(v[q][1]==0) {
                v[q][1]=vv;
                p[q][1]=pp;
            }else{
                v[q][2]=vv;
                p[q][2]=pp;
            }
        }
    }
    for(int i=1;i<=m;++i)
        for(int j=n;j>=0;--j) {
            if(j>=v[i][0])
                f[j]=max(f[j],f[j-v[i][0]]+v[i][0]*p[i][0]);
            if(j>=v[i][0]+v[i][1])
                f[j]=max(f[j],f[j-(v[i][0]+v[i][1])]+v[i][0]*p[i][0]+v[i][1]*p[i][1]);
            if(j>=v[i][0]+v[i][2])
                f[j]=max(f[j],f[j-(v[i][0]+v[i][2])]+v[i][0]*p[i][0]+v[i][2]*p[i][2]);
            if(j>=v[i][0]+v[i][1]+v[i][2])
                f[j]=max(f[j],f[j-(v[i][0]+v[i][1]+v[i][2])]
                        +v[i][0]*p[i][0]+v[i][1]*p[i][1]+v[i][2]*p[i][2]);
        }
    cout<<f[n]<<endl;
    return 0;
}
