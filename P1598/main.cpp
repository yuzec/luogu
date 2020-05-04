#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a[4];
    int i,j,h=0,w[26]={0};
    for(i=0;i<4;++i)
        getline(cin,a[i]);
    for(i=0;i<4;++i)
        for(j=0;j<a[i].size();++j)
            ++w[a[i][j]-'A'];
    for(i=0;i<26;++i)
        if(w[i]>h)
            h=w[i];
    for(;h>0;--h)
    {
        for(i=25;i>=0&&w[i]<h;--i);
        for(j=0;j<i;++j)
            if(w[j]<h)
                cout<<"  ";
            else
                cout<<"* ";
        cout<<'*'<<endl;
    }
    for(i=0;i<25;++i)
        cout<<char('A'+i)<<' ';
    cout<<'Z'<<endl;
    return 0;
}
