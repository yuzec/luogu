#include <iostream>
using namespace std;

int f1[155], f2[155];

int main() {
    int n, m, k, r;
    cin >> n >> m >> k >> r;
    int a[n], t[m], s[m];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<m; ++i)
        cin >> t[i];
    for (int i=0; i<m; ++i)
        cin >> s[i];
    for (int i=0; i<m; ++i)
        for (int j=r; j>=t[i]; --j)
            f1[j] = max(f1[j], f1[j-t[i]]+s[i]);
    for (int i=0; i<=r; ++i)
        if (f1[i]>=k) {
            r -= i;
            break;
        }
    for (int i=0; i<n; ++i)
        for (int j=r; j>=a[i]; --j)
            f2[j] = max(f2[j], f2[j-a[i]]+1);
    cout << f2[r] << endl;
    return 0;
}
