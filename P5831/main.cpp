#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int k, n, ans = 0;
    cin >> k >> n;
    int a[k][n], b[n+1][n+1];
    memset(b, 0, sizeof(b));
    for (int i=0; i<k; ++i)
        for (int j=0; j<n; ++j)
            cin >> a[i][j];
    for (int i=0; i<k; ++i)
        for (int j=0; j<n; ++j)
            for (int m=j+1; m<n; ++m)
                ++b[a[i][j]][a[i][m]];
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j)
            if (b[i][j] == k)
                ++ans;
    cout << ans << endl;
    return 0;
}
