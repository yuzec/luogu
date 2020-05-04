#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n,i,len;
    char pw[55];
    cin>>n>>pw;
    len=strlen(pw);
    for(i=0;i<len;++i)
        pw[i]=(pw[i]-'a'+n)%26+'a';
    cout<<pw<<endl;
    return 0;
}
