#include <iostream>
using namespace std;

int main() {
    int n,i,j,ans=0;
    int a[2001]={6,2,5,5,4,5,6,3,7,6};
    cin>>n;
    n-=4;
    for(i=10;i<=2000;++i)
        a[i]=a[i/10]+a[i%10];
    for(i=0;i<=1000;++i)
    {
        for(j=0;j<=1000;++j)
            if(a[i]+a[j]+a[i+j]==n)
                ++ans;
    }
    cout<<ans<<endl;
    return 0;
}
