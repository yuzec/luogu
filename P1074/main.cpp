#include <iostream>
using namespace std;

struct node {
    int x,y;
}p;
int a[10][10],col[10][10],row[10][10],
    block[10][10],b[10][10],ans=-1;
int score[10][10]=
{{0,0,0,0,0,0,0,0,0,0},
{0,6,6,6,6,6,6,6,6,6},
{0,6,7,7,7,7,7,7,7,6},
{0,6,7,8,8,8,8,8,7,6},
{0,6,7,8,9,9,9,8,7,6},
{0,6,7,8,9,10,9,8,7,6},
{0,6,7,8,9,9,9,8,7,6},
{0,6,7,8,8,8,8,8,7,6},
{0,6,7,7,7,7,7,7,7,6},
{0,6,6,6,6,6,6,6,6,6}};

inline int belong(int x, int y) {
    return (x-1)/3*3+(y+2)/3;
}

node nextxy() {
    int i,cx=10,cy=10;
    for(i=1;i<=9;++i)
        if(cx>a[i][0]&&a[i][0]!=0)
            p.x=i,cx=a[i][0];
    if(cx==10) {
        p.x=p.y=-1;
        return p;
    }
    for(i=1;i<=9;++i)
        if(a[p.x][i]==0&&cy>a[0][i])
            p.y=i,cy=a[0][i];
    return p;
}

void dfs(node p) {
    if(p.x==-1) {
        int i,j,s=0;
        for(i=1;i<=9;++i)
            for(j=1;j<=9;++j)
                s+=a[i][j]*score[i][j];
        if(ans<s)
            ans=s;
        return ;
    }
    for(int i=9;i>=1;--i)
        if(col[p.x][i]==0&&row[p.y][i]==0&&block[b[p.x][p.y]][i]==0) {
            a[p.x][p.y]=i;
            col[p.x][i]=row[p.y][i]=block[b[p.x][p.y]][i]=1;
            --a[p.x][0],--a[0][p.y];
            dfs(nextxy());
            a[p.x][p.y]=0;
            col[p.x][i]=row[p.y][i]=block[b[p.x][p.y]][i]=0;
            ++a[p.x][0],++a[0][p.y];
        }
}

int main() {
    int i,j;
    for(i=1;i<=9;++i)
        for(j=1;j<=9;++j)
            cin>>a[i][j];
    for(i=1;i<=9;++i)
        for(j=1;j<=9;++j) {
            b[i][j]=belong(i,j);
            if(a[i][j]==0) {
                ++a[i][0];
                ++a[0][j];
            }
            else {
                col[i][a[i][j]]=1;
                row[j][a[i][j]]=1;
                block[b[i][j]][a[i][j]]=1;
            }
        }
    dfs(nextxy());
    cout<<ans<<endl;
    return 0;
}
