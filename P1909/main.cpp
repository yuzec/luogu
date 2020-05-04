#include <iostream>
using namespace std;

int main() {
    int n,i,num,min=0;
    int a[3],b[3],money[3];
    cin>>n;
    for(i=0;i<3;++i)
        cin>>a[i]>>b[i];
    for(i=0;i<3;++i)
    {
        num=n/a[i];
        if(n%a[i])
            ++num;
        money[i]=num*b[i];
    }
    for(i=1;i<3;++i)
        if(money[min]>money[i])
            min=i;
    cout<<money[min]<<endl;
    return 0;
}
