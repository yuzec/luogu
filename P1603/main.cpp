#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string w[6];
    int pw,i,j,a[6];
    map<string,int> m;
    m["one"]=1;m["two"]=2;m["three"]=3;m["four"]=4;m["five"]=5;
    m["six"]=6;m["seven"]=7;m["eight"]=8;m["nine"]=9;m["ten"]=10;
    m["eleven"]=11;m["twelve"]=12;m["thirteen"]=13;m["fourteen"]=14;m["fifteen"]=15;
    m["sixteen"]=16;m["seventeen"]=17;m["eighteen"]=18;m["nineteen"]=19;m["twenty"]=20;
    m["a"]=1;m["both"]=2;m["another"]=3;m["first"]=1;m["second"]=2;m["third"]=3;
    for(i=0;i<6;++i)
        cin>>w[i];
    for(i=0,j=0;i<6;++i)
        if(m[w[i]])
            a[j++]=m[w[i]]*m[w[i]]%100;
    sort(a,a+j);
    cout<<a[0];
    for(i=1;i<j;++i) {
        if(a[i]<10)
            cout<<0;
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
