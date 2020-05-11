#include <iostream>
#include <cstring>
using namespace std;

int n,ans=1,temp=1,flag[20];
string a[21];

int check(string x, string y) {
    int i,j=0,k,lenx,leny;
    lenx=x.size();
    leny=y.size();
    for(i=lenx-1;i>=0;--i)
        if(x[i]==y[0]) {
            for(k=i;k<lenx&&x[k]==y[j];++j,++k);
            if(k==lenx)
                break;
            else
                j=0;
        }
    if((j!=lenx&&j!=leny)||lenx==1)
        return j;
    return 0;
}

void dfs(string s) {
    int len;
    for(int i=0;i<n;++i) {
        if(flag[i]==2)
            continue;
        len=check(s,a[i]);
        if(len>0) {
            temp+=a[i].size()-len;
            ++flag[i];
            dfs(a[i]);
            --flag[i];
            temp-=a[i].size()-len;
        }
    }
    if(temp>ans) ans=temp;
}

int main() {
    cin>>n;
    for(int i=0;i<=n;++i)
        cin>>a[i];
    dfs(a[n]);
    cout<<ans<<endl;
    return 0;
}
