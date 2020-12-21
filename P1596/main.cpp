#include <iostream>
using namespace std;

char a[105][105];
int n, m, ans, dir[][2]={{-1, -1}, {-1, 0}, {-1, 1}, 
    {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

void dfs(int x, int y) {
    int dx, dy;
    a[x][y] = '.';
    for (int i=0; i<8; ++i) {
        dx = x + dir[i][0];
        dy = y + dir[i][1];
        if (dx>=0&&dx<n&&dy>=0&&dy<m&&a[dx][dy]=='W')
            dfs(dx, dy);
    }
}


int main() {
    cin >> n >> m;
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            cin >> a[i][j];
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            if (a[i][j] == 'W') {
                dfs(i, j);
                ++ans;
            }
    cout << ans << endl;
    return 0;
}
