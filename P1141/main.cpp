#include <iostream>
#include <queue>
using namespace std;
#define MAXN 100000

struct node {
    int x;
    int y;
}p[MAXN];
int n,m,flag[1001][1001],ans[MAXN+1];
int dir[][4]={{-1,0},{0,1},{1,0},{0,-1}};
char a[1001][1001];
queue<node> q;

int bfs(node u, int k) {
    int i,j,sum=0;
    node v;
    q.push(u);
    while(!q.empty()) {
        u=q.front(),q.pop();
        if(flag[u.x][u.y])
            continue;
        for(i=0;i<4;++i) {
            v.x=u.x+dir[i][0];
            v.y=u.y+dir[i][1];
            if(v.x<1||v.x>n||v.y<1||v.y>n)
                continue;
            if(a[u.x][u.y]!=a[v.x][v.y])
                q.push(v);
        }
        flag[u.x][u.y]=k;
        ++sum;
    }
    return sum;
}

int main() {
    int i,j,k=1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
            cin>>a[i][j];
    for(i=0;i<m;++i)
        cin>>p[i].x>>p[i].y;
    for(i=0;i<m;++i) {
        if(!flag[p[i].x][p[i].y]) {
            ans[k]=bfs(p[i],k);
            ++k;
        }
        cout<<ans[flag[p[i].x][p[i].y]]<<endl;
    }
    return 0;
}
