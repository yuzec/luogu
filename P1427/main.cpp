#include <iostream>
using namespace std;

int main() {
    int i,a[105];
    for(i=0;;++i)
    {
        cin>>a[i];
        if(a[i]==0)
            break;
    }
    for(;i>0;--i)
        cout<<a[i-1]<<' ';
    cout<<endl;
    return 0;
}
