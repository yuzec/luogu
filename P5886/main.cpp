#include <iostream>
using namespace std;

int main() {
    int n, m, p, t, count=0;
    cin >> n >> m >> p;
    int k[n], a[m+1]={0}, ans[m];
    for (int i=0; i<n; ++i) {
        cin >> k[i];
        for (int j=0; j<k[i]; ++j) {
            cin >> t;
            ++a[t];
        }
    }
    for (int i=1; i<=m; ++i)
        if (a[i] == p)
            ans[count++] = i;
    cout << count << endl;
    for (int i=0; i<count; ++i)
        cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
