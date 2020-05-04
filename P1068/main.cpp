#include <iostream>
using namespace std;

int main() {
    int n,m,i,j,idx;
    cin>>n>>m;
    int k[n],s[n];
    for(i=0;i<n;++i)
        cin>>k[i]>>s[i];
    m*=1.5;
    for(i=0;i<n;++i) {
        for(idx=i,j=i;j<n;++j)
            if(s[idx]<s[j]||s[idx]==s[j]&&k[idx]>k[j])
                idx=j;
        if(i>=m&&s[idx]<s[i-1])
            break;
        swap(s[idx],s[i]);
        swap(k[idx],k[i]);
    }
    cout<<s[m-1]<<' '<<i<<endl;
    for(j=0;j<i;++j)
        cout<<k[j]<<' '<<s[j]<<endl;
    return 0;
}
