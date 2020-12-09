#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, u, v;
    cin >> n >> m >> u >> v;
    long long int a[n+1][m+1];
    for (int i=0; i<=n; ++i)
        for (int j=0; j<=m; ++j)
            if (i == 0 && j == 0)
                a[i][j] = 1;
            else if (i==u&&j==v || abs(i-u)==1&&abs(j-v)==2 || abs(i-u)==2&&abs(j-v)==1)
                a[i][j] = 0;
            else if (j == 0)
                a[i][0] = a[i-1][0];
            else if (i == 0)
                a[0][j] = a[0][j-1];
            else
                a[i][j] = a[i-1][j] + a[i][j-1];
    cout << a[n][m] << endl;
    return 0;
}
