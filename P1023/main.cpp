#include <iostream>
using namespace std;

int main() {
    int i,j,r,len,expect,reduce,ans,maxp,profit;
    int price[1000],sales[1000],s[100000];
    cin>>expect;
    for(len=0;;++len) {
        cin>>price[len]>>sales[len];
        if(price[len]==-1)
            break;
    }
    cin>>reduce;
    for(i=1;i<len;++i) {
        r=(sales[i-1]-sales[i])/(price[i]-price[i-1]);
        for(j=price[i-1];j<price[i];++j)
            s[j]=sales[i-1]-r*(j-price[i-1]);
    }
    for(i=price[len-1];s[i-1]>0;++i)
        s[i]=sales[len-1]-reduce*(i-price[len-1]);
    for(i=1;i<100000;++i) {
        maxp=0;
        for(j=price[0]+1;s[j]>0;++j) {
            profit=(j-price[0]+i)*s[j];
            if(profit>=maxp) {
                maxp=profit;
                ans=j;
            }
        }
        if(ans==expect) {
            cout<<i<<endl;
            return 0;
        }
        maxp=0;
        for(j=price[0]+1;s[j]>0;++j) {
            profit=(j-price[0]-i)*s[j];
            if(profit>=maxp) {
                maxp=profit;
                ans=j;
            }
        }
        if(ans==expect) {
            cout<<-i<<endl;
            return 0;
        }
    }
    cout<<"NO SOLUTION"<<endl;
    return 0;
}
