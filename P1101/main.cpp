#include <iostream>
using namespace std;

int dir[][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
char a[100][100],b[100][100],c[]="yizhong";

void dfs(int x, int y, int k, int m) {
    if(m==6) {
        for(;m>=0;--m) {
            b[x][y]=c[m];
            x-=dir[k][0];
            y-=dir[k][1];
        }
        return ;
    }
    x+=dir[k][0];
    y+=dir[k][1];
    if(a[x][y]==c[m+1])
        dfs(x,y,k,m+1);
}

int main() {
    int n,i,j,k,x,y;
    cin>>n;
    for(i=0;i<n;++i)
        for(j=0;j<n;++j) {
            cin>>a[i][j];
            b[i][j]='*';
        }
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
            if(a[i][j]=='y')
                for(k=0;k<8;++k)
                    dfs(i,j,k,0);
    for(i=0;i<n;++i) {
        for(j=0;j<n;++j)
            cout<<b[i][j];
        cout<<endl;
    }
    return 0;
}
