#include <iostream>
using namespace std;

int r,c,h[100][100],s[100][100],
    dir[][4]={{1,0},{0,1},{-1,0},{0,-1}};

int dfs(int x, int y) {
    if(s[x][y])
        return s[x][y];
    s[x][y]=1;
    int dx,dy,flag=0;
    for(int i=0;i<4;++i) {
        dx=x+dir[i][0];
        dy=y+dir[i][1];
        if(dx<0||dx>=r||dy<0||dy>=c)
            continue;
        if(h[dx][dy]<h[x][y]) {
            flag=1;
            dfs(dx,dy);
            if(s[x][y]<s[dx][dy]+1)
                s[x][y]=s[dx][dy]+1;
        }
    }
    return s[x][y];
}

int main() {
    int i,j,step,ans=0;
    cin>>r>>c;
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
            cin>>h[i][j];
    for(i=0;i<r;++i)
        for(j=0;j<c;++j) {
            step=dfs(i,j);
            if(ans<step)
                ans=step;
        }
    cout<<ans<<endl;
    return 0;
}
