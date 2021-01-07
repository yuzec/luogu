#include <iostream>
using namespace std;

long long val[1005][1005];

int main() {
    int n, x;
    cin >> n >> x;
    int lose[n+1], win[n+1], use[n+1];
    for (int i=1; i<=n; ++i)
        cin >> lose[i] >> win[i] >> use[i];
    for (int i=1; i<=n; ++i)
        for (int j=0; j<=x; ++j)
            if (j>=use[i])
                val[i][j] = max(val[i-1][j-use[i]]+win[i], val[i-1][j]+lose[i]);
            else
                val[i][j] = val[i-1][j] + lose[i];
    cout << 5*val[n][x] << endl;
    return 0;
}
