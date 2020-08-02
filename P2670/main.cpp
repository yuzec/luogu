#include <iostream>
using namespace std;

int main() {
    int n, m;
    int dir[][2] = {{-1, -1}, {-1, 0}, {-1, 1},
        {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    cin >> n >> m;
    char a[n][m];
    int ans[n][m];
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            cin >> a[i][j];
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            if (a[i][j] == '*')
                ans[i][j] = -1;
            else {
                ans[i][j] = 0;
                for (int k=0; k<8; ++k) {
                    int ii = i+dir[k][0];
                    int jj = j+dir[k][1];
                    if (ii<0 || ii>n-1 || jj<0 || jj>m-1)
                        continue;
                    if (a[ii][jj] == '*')
                        ++ans[i][j];
                }
            }
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if (ans[i][j] == -1)
                cout << '*';
            else
                cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
