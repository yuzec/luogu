#include <iostream>
using namespace std;

int dp[100005];

int main() {
    int n, ans=0;
    cin >> n;
    int p[n];
    for (int i=0; i<n; ++i)
        cin >> p[i];
    dp[0] = p[0]>0?p[0]:0;
    for (int i=1; i<n; ++i) {
        dp[i] += dp[i-1] + p[i];
        if (dp[i] < 0)
            dp[i] = 0;
        if (ans < dp[i])
            ans = dp[i];
    }
    if (ans == 0) {
        ans = p[0];
        for (int i=1; i<n; ++i)
            if (ans < p[i])
                ans = p[i];
    }
    cout << ans << endl;
    return 0;
}
