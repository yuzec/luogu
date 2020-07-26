#include <iostream>
using namespace std;

int f[20001];

int main() {
    int n, ans=0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        f[a[i]] = 1;
    }
    for (int i=0; i<n; ++i)
        for (int j=i+1; j<n; ++j)
            if (f[a[i] + a[j]] == 1) {
                ++ans;
                ++f[a[i] + a[j]];
            }
    cout << ans << endl;
    return 0;
}
