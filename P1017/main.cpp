#include <iostream>
using namespace std;

int main() {
    int n,r,i,temp;
    char R[17];
    cin>>n>>r;
    cout<<n<<'=';
    for(i=0;n;++i,n/=r)
    {
        temp=n%r;
        if(temp<0) {
            temp-=r;
            n+=r;
        }
        R[i]=(temp>9)?(temp-10+'A'):(temp+'0');
    }
    for(--i;i>=0;--i)
        cout<<R[i];
    cout<<"(base"<<r<<')'<<endl;
    return 0;
}
