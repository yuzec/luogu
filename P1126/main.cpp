#include <iostream>
#include <queue>
using namespace std;

struct node {
    int x;
    int y;
    int d;
    int t;
};
int n,m,ex,ey,a[51][51],flag[51][51][4];
int dir[][4]={{-1,0},{0,1},{1,0},{0,-1}};
queue<node> q;

int check(node s) {
    node ns;
    for(int i=1;i<=3;++i) {
        ns.x=s.x+dir[s.d][0]*i;
        ns.y=s.y+dir[s.d][1]*i;
        if(ns.x<1||ns.x>n-1||ns.y<1||ns.y>m-1||a[ns.x][ns.y]
                ||a[ns.x][ns.y+1]||a[ns.x+1][ns.y]||a[ns.x+1][ns.y+1])
            return i-1;
    }
    return 3;
}

int bfs(node s) {
    int i,j;
    node ns;
    q.push(s);
    while(!q.empty()) {
        s=q.front(),q.pop();
        if(s.x==ex&&s.y==ey)
            return s.t;
        if(flag[s.x][s.y][s.d]!=0&&s.t>=flag[s.x][s.y][s.d])
            continue;
        ns.d=s.d,ns.t=s.t+1;
        j=check(s);
        for(i=1;i<=j;++i) {
            ns.x=s.x+dir[s.d][0]*i;
            ns.y=s.y+dir[s.d][1]*i;
            q.push(ns);
        }
        ns.x=s.x,ns.y=s.y;
        ns.d=(s.d+3)%4;
        q.push(ns);
        ns.d=(s.d+1)%4;
        q.push(ns);
        flag[s.x][s.y][s.d]=s.t;
    }
    return -1;
}

int main() {
    int i,j;
    char sd;
    node s;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
            cin>>a[i][j];
    cin>>s.x>>s.y>>ex>>ey>>sd;
    switch(sd) {
    case 'N': s.d=0;break;
    case 'E': s.d=1;break;
    case 'S': s.d=2;break;
    case 'W': s.d=3;break;
    }
    s.t=0;
    cout<<bfs(s)<<endl;
    return 0;
}
