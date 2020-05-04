#include <iostream>
using namespace std;

int main() {
    int N,i,a=1,b=1;
    cin>>N;
    for(i=1;i<N;)
    {
        ++b;
        while(++i<N&&b>1)
        {
            ++a;
            --b;
        }
        if(i==N) break;
        ++a;
        while(++i<N&&a>1)
        {
            --a;
            ++b;
        }
    }
    cout<<a<<'/'<<b<<endl;
    return 0;
}
