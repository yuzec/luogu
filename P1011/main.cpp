#include <iostream>
using namespace std;

int f[25], u[25];

int main() {
    int a, n, m, x;
    cin >> a >> n >> m >> x;
    f[1] = f[2] = u[1] = a;
    for (int i=0; i<=m && f[n-1]!=m; ++i) {
        u[2] = i;
        for (int j=3; j<n; ++j) {
            u[j] = u[j-1] + u[j-2];
            f[j] = f[j-1] + u[j-2];
        }
    }
    cout << f[x] << endl;
    return 0;
}
