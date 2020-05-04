#include <iostream>
using namespace std;

int main() {
    int n,i,j,k,num,sum=0,ans=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    for(i=0;i<n;++i)
        sum+=a[i];
    num=sum/n;
    for(i=0;i<n;i=j) {
        sum=0;
        for(j=i;j<n&&sum<=num*(j-i);++j)
            sum+=a[j];
        sum-=num*(j-i);
        if(sum!=0) {
            a[j-1]-=sum;
            a[j]+=sum;
            ++ans;
        }
        for(k=j-1;k>i;--k)
            if(a[k]>num) {
                a[k-1]+=a[k]-num;
                a[k]=num;
                ++ans;
            }
    }
    cout<<ans<<endl;
    return 0;
}
