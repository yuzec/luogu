#include <iostream>
using namespace std;

int main() {
    int m,k=0,s[100],e[100];
    cin>>m;
    for(int i=0;i<m;++i)
        for(int n=2,t=0;t<m;++n) {
            t=n*i+n*(n-1)/2;
            if(t==m) {
                s[k]=i;
                e[k++]=i+n-1;
            }
        }
    for(int i=0;i<k;++i)
        cout<<s[i]<<' '<<e[i]<<endl;
    return 0;
}
