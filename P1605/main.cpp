#include <iostream>
using namespace std;

int n,m,fx,fy,ans,flag[6][6];
int dir[][2]={{1,0},{0,1},{-1,0},{0,-1}};

void dfs(int x, int y) {
    if(x==fx&&y==fy) {
        ++ans;
        return ;
    }
    flag[x][y]=1;
    for(int i=0;i<4;++i) {
        if(x==1&&i==2) continue;
        if(x==n&&i==0) continue;
        if(y==1&&i==3) continue;
        if(y==m&&i==1) continue;
        if(flag[x+dir[i][0]][y+dir[i][1]]==0)
            dfs(x+dir[i][0],y+dir[i][1]);
    }
    flag[x][y]=0;
}

int main() {
    int t,sx,sy,tx,ty,i;
    cin>>n>>m>>t>>sx>>sy>>fx>>fy;
    for(i=0;i<t;++i) {
        cin>>tx>>ty;
        flag[tx][ty]=1;
    }
    dfs(sx,sy);
    cout<<ans<<endl;
    return 0;
}
