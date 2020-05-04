#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int m) {
    if(m==0||m==1)
        return false;
    if(m==2)
        return true;
    int len=sqrt(m);
    for(int i=2;i<=len;++i)
        if(m%i==0)
            return false;
    return true;
}

int main() {
    int n,i,j;
    cin>>n;
    int p[n]={0};
    for(i=2;i<n;++i)
        if(isPrime(i))
            p[i]=1;
    for(i=2;i<n;++i)
        if(p[i])
            for(j=2;j<n;++j)
                if(p[j]&&p[n-i-j])
                {
                    cout<<i<<' '<<j<<' '<<n-i-j<<endl;
                    return 0;
                }
    return 0;
}
