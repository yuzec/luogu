#include <iostream>
using namespace std;

int main() {
    int x,n,i,d,sum=0;
    cin>>x>>n;
    for(i=0;i<n;++i)
    {
        d=(i+x)%7;
        if(d!=6&&d!=0)
            sum+=250;
    }
    cout<<sum<<endl;
    return 0;
}
