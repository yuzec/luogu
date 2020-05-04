#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main() {
    string a,b,c;
    cin>>a>>b>>c;
    map<char,char> m,t;
    for(int i=0;i<a.size();++i) {
        if(m[a[i]]&&m[a[i]]!=b[i]) {
            cout<<"Failed"<<endl;
            return 0;
        }
        if(t[b[i]]&&t[b[i]]!=a[i]) {
            cout<<"Failed"<<endl;
            return 0;
        }
        m[a[i]]=b[i];
        t[b[i]]=a[i];
    }
    if(m.size()<26) {
        cout<<"Failed"<<endl;
        return 0;
    }
    for(int i=0;i<c.size();++i)
        c[i]=m[c[i]];
    cout<<c<<endl;
    return 0;
}
