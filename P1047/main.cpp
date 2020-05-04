#include <iostream>
using namespace std;

int main() {
    int L,M,i,j,num=0;
    cin>>L>>M;
    int start[M],end[M],tree[L+1]={0};
    for(i=0;i<M;++i)
        cin>>start[i]>>end[i];
    for(i=0;i<M;++i)
        for(j=start[i];j<=end[i];++j)
            if(!tree[j])
                tree[j]=1;
    for(i=0;i<=L;++i)
        num+=tree[i];
    cout<<L+1-num<<endl;
    return 0;
}
