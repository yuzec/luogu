#include <iostream>
using namespace std;

int main() {
    int m,n,k,l,d,i,j,idx;
    cin>>m>>n>>k>>l>>d;
    int D[d][4],M[m]={0},N[n]={0},K[m]={0},L[n]={0};
    for(i=0;i<d;++i)
        for(j=0;j<4;++j)
            cin>>D[i][j];
    for(i=0;i<d;++i)
        if(D[i][0]==D[i][2])
            ++N[min(D[i][1],D[i][3])];
        else
            ++M[min(D[i][0],D[i][2])];
    for(i=0;i<k;++i) {
        for(idx=1,j=2;j<m;++j)
            if(M[j]>M[idx])
                idx=j;
        K[idx]=1;
        M[idx]=0;
    }
    for(i=0;i<l;++i) {
        for(idx=1,j=2;j<n;++j)
            if(N[j]>N[idx])
                idx=j;
        L[idx]=1;
        N[idx]=0;
    }
    for(i=1;i<m;++i)
        if(K[i]==1) {
            cout<<i;
            if(--k)
                cout<<' ';
        }
    cout<<endl;
    for(i=1;i<n;++i)
        if(L[i]==1) {
            cout<<i;
            if(--l)
            cout<<' ';
        }
    cout<<endl;
    return 0;
}
