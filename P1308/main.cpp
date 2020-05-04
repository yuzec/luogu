#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a,b;
    int i,j,lena,lenb,idx,count=0;
    getline(cin,a);
    getline(cin,b);
    lena=a.size();
    lenb=b.size();
    for(i=0;i<lena;++i)
        a[i]=tolower(a[i]);
    for(i=0;i<lenb;++i)
        b[i]=tolower(b[i]);
    for(i=0;i<lenb;++i)
    {
        for(j=0;j<lena;++j)
            if(a[j]!=b[i+j]||(i>0&&b[i-1]!=' '))
                break;
        if(j==lena&&(b[i+j]==' '||i+j==lenb)) {
            ++count;
            if(count==1)
                idx=i;
        }
    }
    if(count)
        cout<<count<<' '<<idx<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
