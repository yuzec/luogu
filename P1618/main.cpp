#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c,i,j,sum,tempb,tempc,k=0;
    int flag[10],ans[100]={0};
    cin>>a>>b>>c;
    j=__gcd(__gcd(a,b),c);
    a/=j;b/=j;c/=j;
    for(i=100;i<1000;++i)
        if(i%a==0&&c*i/a<1000)
        {
            sum=0;
            memset(flag,0,sizeof(flag));
            tempb=b*i/a;
            tempc=c*i/a;
            flag[i%10]=flag[i/10%10]=flag[i/100]=\
            flag[tempb%10]=flag[tempb/10%10]=flag[tempb/100]=\
            flag[tempc%10]=flag[tempc/10%10]=flag[tempc/100]=1;
            for(j=1;j<10;++j)
                sum+=flag[j];
            if(sum==9)
                ans[k++]=i;
        }
    if(k>0)
        for(j=0;j<k;++j)
            cout<<ans[j]<<' '<<ans[j]*b/a<<' '<<ans[j]*c/a<<endl;
    else
        cout<<"No!!!"<<endl;
    return 0;
}
