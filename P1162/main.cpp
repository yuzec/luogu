#include <iostream>
#include <queue>
using namespace std;

int n,a[32][32],dir[][2]={{1,0},{0,1},{-1,0},{0,-1}};
queue<int> q;

void bfs(int x, int y) {
    int i,j,dx,dy;
    a[x][y]=0;
    q.push(x);
    q.push(y);
    while(!q.empty()) {
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();
        for(int i=0;i<4;++i) {
            if(x==0&&i==2) continue;
            if(x==n+1&&i==0) continue;
            if(y==0&&i==3) continue;
            if(y==n+1&&i==1) continue;
            dx=x+dir[i][0];
            dy=y+dir[i][1];
            if(a[dx][dy]==2) {
                a[dx][dy]=0;
                q.push(dx);
                q.push(dy);
            }
        }
    }
}

int main() {
    int i,j;
    cin>>n;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
            cin>>a[i][j];
    for(i=0;i<=n+1;++i)
        for(j=0;j<=n+1;++j)
            if(a[i][j]==0)
                a[i][j]=2;
    bfs(0,0);
    for(i=1;i<=n;++i) {
        for(j=1;j<=n;++j)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
