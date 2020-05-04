#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int n) {
    int i,j,p[10];
    for(j=0;n;n/=10)
        p[j++]=n%10;
    for(i=0;i<j/2;++i)
        if(p[i]!=p[j-i-1])
            return false;
    return true;
}

bool isPrime(int n) {
    int sqrtn=sqrt(n);
    for(int i=2;i<=sqrtn;++i)
        if(n%i==0)
            return false;
    return true;
}

int main() {
    int a,b,i,j=0,c[65535];
    cin>>a>>b;
    if(b>10000000)
        b=10000000;
    for(i=(a%2)?a:a+1;i<=b;i+=2)
        if(isPalindrome(i)&&isPrime(i))
            c[j++]=i;
    for(i=0;i<j;++i)
        cout<<c[i]<<endl;
    return 0;
}
