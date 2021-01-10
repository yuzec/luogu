#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, m, n, j=0;
    cin >> k >> m >> n;
    int a[m], b[m], ans[m];
    for (int i=0; i<m; ++i)
        cin >> a[i] >> b[i];
    for (int i=0; i<m; ++i)
        if (ceil(n*1.0/b[i])*a[i] <= k)
            ans[j++] = i + 1;
    if (j == 0)
        cout << -1;
    for (int i=0; i<j; ++i)
        cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
