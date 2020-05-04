#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[7],b[7];
    cin>>a>>b;
    int i,a_mul=1,b_mul=1;
    int a_len=strlen(a),b_len=strlen(b);
    for(i=0;i<a_len;++i)
        a_mul*=a[i]-'A'+1;
    for(i=0;i<b_len;++i)
        b_mul*=b[i]-'A'+1;
    if(a_mul%47==b_mul%47)
        cout<<"GO"<<endl;
    else
        cout<<"STAY"<<endl;
    return 0;
}
