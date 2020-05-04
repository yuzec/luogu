#include <iostream>
using namespace std;

int main() {
    char ISBN[13];
    int i,j=1,temp=0;
    cin>>ISBN;
    for(i=0;i<12;++i)
    {
        if(ISBN[i]=='-')
            continue;
        temp+=(ISBN[i]-'0')*j++;
    }
    temp%=11;
    if(temp==(ISBN[12]-'0')||temp==10&&ISBN[12]=='X') {
        cout<<"Right"<<endl;
        return 0;
    }
    ISBN[12]=(temp==10)?'X':temp+'0';
    for(i=0;i<13;++i)
        cout<<ISBN[i];
    cout<<endl;
    return 0;
}
