#include <iostream>
using namespace std;

int a[1005],dp[1005];

int sum_prime(int n) {
    int ans = 0;
    for (int i=1; i<n; ++i)
        if (n % i == 0)
            ans += i;
    return ans;
}

int main() {
    int s;
    cin >> s;
    for (int i=1; i<=s; ++i)
        a[i] = sum_prime(i);
    for (int i=1; i<=s; ++i)
        for (int j=s; j>=i; --j)
            dp[j] = max(dp[j], dp[j-i]+a[i]);
    cout << dp[s] << endl;
    return 0;
}
