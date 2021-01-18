#include <iostream>
using namespace std;

int dp[1005][1005];

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    int a[n], b[n], c[n];
    for (int i=0; i<n; ++i)
        cin >> a[i] >> b[i] >> c[i];
    for (int i=0; i<n; ++i)
        for (int j=m; j>=b[i]; --j)
            for (int k=x; k>=c[i]; --k)
                dp[j][k] = max(dp[j][k], dp[j-b[i]][k-c[i]]+a[i]);
    cout << dp[m][x] << endl;
    return 0;
}
