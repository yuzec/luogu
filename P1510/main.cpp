#include <iostream>
using namespace std;

int f[10005];

int main() {
    int v, n, c;
    cin >> v >> n >> c;
    int k[n], m[n];
    for (int i=0; i<n; ++i)
        cin >> k[i] >> m[i];
    for (int i=0; i<n; ++i)
        for (int j=c; j>=m[i]; --j)
            f[j] = max(f[j], f[j-m[i]]+k[i]);
    if (f[c] < v)
        cout << "Impossible" << endl;
    else
        for (int i=0; i<=c; ++i)
            if (f[i] >= v) {
                cout << c-i << endl;
                break;
            }
    return 0;
}
