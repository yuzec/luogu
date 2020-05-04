#include <iostream>
using namespace std;

int main() {
    int n,i,j,l,x,y;
    cin>>n;
    int a[n],b[n],g[n],k[n];
    for(i=0;i<n;++i)
        cin>>a[i]>>b[i]>>g[i]>>k[i];
    cin>>x>>y;
    for(i=n-1;i>=0;--i)
        if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
        {
            cout<<i+1<<endl;
            return 0;
        }
    cout<<-1<<endl;
    return 0;
}
