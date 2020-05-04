#include <iostream>
#include <cstring>
using namespace std;

bool comp(string a, string b) {
    int lena=a.size(),lenb=b.size();
    if(lena<lenb)
        return true;
    if(lena>lenb)
        return false;
    for(int i=0;i<lena;++i)
        if(a[i]<b[i])
            return true;
        else if(a[i]>b[i])
            return false;
    return false;
}

int main() {
    int n,i,idx=0;
    cin>>n;
    string v[n];
    for(i=0;i<n;++i)
        cin>>v[i];
    for(i=0;i<n;++i)
        if(comp(v[idx],v[i]))
            idx=i;
    cout<<idx+1<<'\n'<<v[idx]<<endl;
    return 0;
}
