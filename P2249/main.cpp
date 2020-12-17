#include <iostream>
using namespace std;

int main() {
    int n, m, l, r, mid;
    cin >> n >> m;
    int a[n], q[m], ans[m];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<m; ++i)
        cin >> q[i];
    for (int i=0; i<m; ++i) {
        l = 0;
        r = n - 1;
        while (l < r) {
            mid = (l + r) / 2;
            if (a[mid] >= q[i])
                r = mid;
            else
                l = mid + 1;
        }
        if (l == r)
            ans[i] = a[l]==q[i]?l+1:-1;
    }
    for (int i=0; i<m; ++i)
        cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
