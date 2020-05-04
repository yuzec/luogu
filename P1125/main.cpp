#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

bool isprime(int n) {
    if(n==0||n==1)
        return false;
    int i,len=sqrt(n);
    for(i=2;i<=len;++i)
        if(n%i==0)
            return false;
    return true;
}

int main() {
    string a;
    int maxn=0,minn=100,i,len,letter[26]={0};
    cin>>a;
    len=a.size();
    for(i=0;i<len;++i)
        ++letter[a[i]-'a'];
    for(i=0;i<26;++i) {
        if(letter[i]==0)
            continue;
        if(letter[i]>maxn)
            maxn=letter[i];
        if(letter[i]<minn)
            minn=letter[i];
    }
    if(isprime(maxn-minn))
        cout<<"Lucky Word"<<'\n'<<maxn-minn<<endl;
    else
        cout<<"No Answer"<<'\n'<<0<<endl;
    return 0;
}
