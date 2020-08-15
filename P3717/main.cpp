#include <iostream>
#include <cmath>
using namespace std;

int a[105][105];

int main() {
    int n, m, r, ans=0;
    cin >> n >> m >> r;
    int x[m], y[m];
    for (int i=0; i<m; ++i) {
        cin >> x[i] >> y[i];
        a[x[i]][y[i]] = 1;
    }
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j) {
            if (a[i][j] > 0)
                continue;
            for (int k=0; k<m; ++k)
                if (sqrt(pow(i-x[k], 2) + pow(j-y[k], 2)) <= r)
                    a[i][j] = 1;
        }
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j)
            ans += a[i][j];
    cout << ans << endl;
    return 0;
}
