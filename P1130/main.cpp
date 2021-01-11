#include <iostream>
using namespace std;

int f[2005][2005];

int main() {
    int n, m, ans;
    cin >> n >> m;
    int a[m][n];
    for (int i=0; i<m; ++i)
        for (int j=0; j<n; ++j)
            cin >> a[i][j];
    for (int i=0; i<m; ++i)
        f[i][0] = a[i][0];
    for (int j=1; j<n; ++j)
        for (int i=0; i<m; ++i)
            if (i == 0)
                f[i][j] = min(f[i][j-1], f[m-1][j-1]) + a[i][j];
            else
                f[i][j] = min(f[i][j-1], f[i-1][j-1]) + a[i][j];
    ans = f[0][n-1];
    for (int i=1; i<m; ++i)
        if (ans > f[i][n-1])
            ans = f[i][n-1];
    cout << ans << endl;
    return 0;
}
