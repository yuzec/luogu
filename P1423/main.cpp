#include <iostream>
using namespace std;

int main() {
    int i;
    double x,m=2,sum=0;
    cin>>x;
    for(i=0;sum<x;++i)
    {
        sum+=m;
        m*=0.98;
    }
    cout<<i<<endl;
    return 0;
}
