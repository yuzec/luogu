#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
using namespace std;

struct node {
    int x,y,step;
};
int n,m,ans[401][401],dir[][8]={{2,1},{1,2},
    {-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
queue<node> q;

void bfs(node u) {
    node v;
    q.push(u);
    while(!q.empty()) {
        u=q.front(),q.pop();
        if(ans[u.x][u.y]!=-1&&u.step>=ans[u.x][u.y])
            continue;
        v.step=u.step+1;
        for(int i=0;i<8;++i) {
            v.x=u.x+dir[i][0];
            v.y=u.y+dir[i][1];
            if(v.x>0&&v.x<=n&&v.y>0&&v.y<=m)
                q.push(v);
        }
        ans[u.x][u.y]=u.step;
    }
}

int main() {
    node horse;
    memset(ans,-1,sizeof(ans));
    cin>>n>>m>>horse.x>>horse.y;
    horse.step=0;
    bfs(horse);
    for(int i=1;i<=n;++i) {
        for(int j=1;j<=m;++j)
            printf("%-5d",ans[i][j]);
        printf("\n");
    }
    return 0;
}
