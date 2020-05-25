#include <iostream>
using namespace std;

void solve(int n) {
    if(n==0||n==2) {
        cout<<n;
        return ;
    }
    int i,j,b[20];
    for(i=j=0;n;++i,n>>=1)
        if(n&1)
            b[j++]=i;
    for(i=j-1;i>=0;--i) {
        cout<<2;
        if(b[i]!=1) {
            cout<<'(';
            solve(b[i]);
            cout<<')';
        }
        if(i>0)
            cout<<'+';
    }
}

int main() {
    int n;
    cin>>n;
    solve(n);
    cout<<endl;
    return 0;
}
