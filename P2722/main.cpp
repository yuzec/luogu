#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int p[n], t[n], dp[m+1]={0};
    for (int i=0; i<n; ++i)
        cin >> p[i] >> t[i];
    for (int i=0; i<n; ++i)
        for (int j=t[i]; j<=m; ++j)
            dp[j] = max(dp[j], dp[j-t[i]]+p[i]);
    cout << dp[m] << endl;
    return 0;
}
