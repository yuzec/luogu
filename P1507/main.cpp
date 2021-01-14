#include <iostream>
using namespace std;

int dp[505][505];

int main () {
    int vv, mm, n;
    cin >> vv >> mm >> n;
    int v[n], m[n], c[n];
    for (int i=0; i<n; ++i)
        cin >> v[i] >> m[i] >> c[i];
    for (int i=0; i<n; ++i)
        for (int j=vv; j>=v[i]; --j)
            for (int k=mm; k>=m[i]; --k)
                dp[j][k] = max(dp[j][k], dp[j-v[i]][k-m[i]]+c[i]);
    cout << dp[vv][mm] << endl;
    return 0;
}
