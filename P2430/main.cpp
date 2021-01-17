#include <iostream>
using namespace std;

int dp[5005];

int main() {
    int l1, l2, l, m, n, t;
    cin >> l1 >> l2 >> m >> n;
    l = l2 / l1;
    int a[n], b[m], c[m];
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        a[i] *= l;
    }
    for (int i=0; i<m; ++i)
        cin >> b[i] >> c[i];
    cin >> t;
    for (int i=0; i<m; ++i)
        for (int j=t; j>=a[b[i]-1]; --j)
            dp[j] = max(dp[j], dp[j-a[b[i]-1]]+c[i]);
    cout << dp[t] << endl;
    return 0;
}
