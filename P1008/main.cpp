#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a,b,c,i,sum,flag[10];
    for(a=123;a<=329;++a)
    {
        sum=0;
        memset(flag,0,sizeof(flag));
        b=a*2;
        c=a*3;
        flag[a%10]=flag[a/10%10]=flag[a/100]=\
                   flag[b%10]=flag[b/10%10]=flag[b/100]=\
                   flag[c%10]=flag[c/10%10]=flag[c/100]=1;
        for(i=1;i<10;++i)
            sum+=flag[i];
        if(sum==9)
            cout<<a<<' '<<b<<' '<<c<<endl;
    }
    return 0;
}
