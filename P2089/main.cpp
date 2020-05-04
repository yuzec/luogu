#include <iostream>
using namespace std;

int n,len,d[10],ans[59049][10];

void dfs(int k, int m) {
    if(k==10) {
        if(m==n) {
            for(int i=0;i<10;++i)
                ans[len][i]=d[i];
            ++len;
        }
        return ;
    }
    for(int i=1;i<=3;++i)
    {
        if(m+i>n)
            break;
        d[k]=i;
        dfs(k+1,m+i);
    }
}

int main() {
    cin>>n;
    if(n<10||n>30) {
        cout<<0<<endl;
        return 0;
    }
    dfs(0,0);
    cout<<len<<endl;
    for(int i=0;i<len;++i)
    {
        for(int j=0;j<10;++j)
            cout<<ans[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
