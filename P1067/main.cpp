#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    int a[n+1];
    for(i=n;i>=0;--i)
        cin>>a[i];
    for(i=n;i>0;--i)
    {
        if(a[i]==0)
            continue;
        if(a[i]>0&&i!=n)
            cout<<'+';
        if(a[i]==-1)
            cout<<'-';
        else if(a[i]!=1)
            cout<<a[i];
        if(i!=1)
            cout<<"x^"<<i;
        else
            cout<<'x';
    }
    if(a[0]==0)
        cout<<endl;
    else if(a[0]>0)
        cout<<'+'<<a[0]<<endl;
    else
        cout<<a[0]<<endl;
    return 0;
}
