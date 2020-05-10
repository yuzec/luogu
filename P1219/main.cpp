#include <iostream>
using namespace std;

int n,ans,a[14];
bool flag[3][28];

void dfs(int i) {
    if(i>n) {
        ++ans;
        if(ans<=3) {
            for(int j=1;j<=n;++j)
                cout<<a[j]<<' ';
            cout<<endl;
        }
        return ;
    }
    for(int j=1;j<=n;++j)
        if((!flag[0][j])&&(!flag[1][i+j])&&(!flag[2][i-j+n])) {
            a[i]=j;
            flag[0][j]=1;
            flag[1][i+j]=1;
            flag[2][i-j+n]=1;
            dfs(i+1);
            flag[0][j]=0;
            flag[1][i+j]=0;
            flag[2][i-j+n]=0;
        }
}

int main() {
    cin>>n;
    dfs(1);
    cout<<ans<<endl;
    return 0;
}
