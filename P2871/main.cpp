#include <iostream>
using namespace std;

int f[12885];

int main() {
    int n, m;
    cin >> n >> m;
    int c[n], w[n];
    for (int i=0; i<n; ++i)
        cin >> c[i] >> w[i];
    for (int i=0; i<n; ++i)
        for (int j=m; j>=c[i]; --j)
            f[j] = max(f[j], f[j-c[i]]+w[i]);
    cout << f[m] << endl;
    return 0;
}
