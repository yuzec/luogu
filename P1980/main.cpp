#include <iostream>
using namespace std;

int countx(int n, int x) {
    int count=0;
    while(n) {
        if(n%10==x)
            ++count;
        n/=10;
    }
    return count;
}

int main() {
    int n,x,i,sum=0;
    cin>>n>>x;
    for(i=1;i<=n;++i)
        sum+=countx(i,x);
    cout<<sum<<endl;
    return 0;
}
