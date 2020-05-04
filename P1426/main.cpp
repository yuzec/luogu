#include <iostream>
using namespace std;

int main() {
    float s,x,v,d=0;
    cin>>s>>x;
    for(v=7;d<s-x;v*=0.98)
        d+=v;
    if(d+v>s+x)
        cout<<'n'<<endl;
    else
        cout<<'y'<<endl;
    return 0;
}
