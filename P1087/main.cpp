#include <iostream>
#include <cstring>
using namespace std;

void solve(string s, int n) {
    if(n==1) {
        if(s=="0")
            cout<<'B';
        else
            cout<<'I';
        return ;
    }
    solve(s.substr(0,n/2),n/2);
    solve(s.substr(n/2),n/2);
    for(int i=1;i<n;++i)
        if(s[i]!=s[0]) {
            cout<<'F';
            return ;
        }
    if(s[0]=='0')
        cout<<'B';
    else
        cout<<'I';
}

int main() {
    int n;
    string s;
    cin>>n>>s;
    n=s.length();
    solve(s,n);
    cout<<endl;
    return 0;
}
