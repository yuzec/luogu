#include <iostream>
using namespace std;

int main() {
    int h, n;
    cin >> h >> n;
    int s[n], dp[h+1]={0};
    for (int i=0; i<n; ++i)
        cin >> s[i];
    for (int i=0; i<n; ++i)
        for (int j=h; j>=s[i]; --j)
            dp[j] = max(dp[j], dp[j-s[i]]+s[i]);
    cout << dp[h] << endl;
    return 0;
}
