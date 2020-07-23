#include <iostream>
using namespace std;

int f[2000001];

int main() {
    int n, pos;
    cin >> n;
    double a[n];
    int t[n];
    for (int i=0; i<n; ++i)
        cin >> a[i] >> t[i];
    for (int i=0; i<n; ++i)
        for (int j=1; j<=t[i]; ++j) {
            pos = int(j*a[i]);
            f[pos]=f[pos]?0:1;
        }
    for (pos=1;!f[pos];++pos);
    cout << pos << endl;
    return 0;
}
