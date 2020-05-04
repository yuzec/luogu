#include <iostream>
using namespace std;

int main() {
    int apple[10],high,i,sum=0;
    for(i=0;i<10;++i)
        cin>>apple[i];
    cin>>high;
    high+=30;
    for(i=0;i<10;++i)
        if(high>=apple[i])
            ++sum;
    cout<<sum<<endl;
    return 0;
}
