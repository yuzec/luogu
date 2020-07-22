#include <iostream>
using namespace std;

int main() {
    int n, m, ans=300000;
    cin >> n >> m;
    int a[n];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<=n-m; ++i) {
        int sum = 0;
        for (int j=0; j<m; ++j)
            sum += a[i+j];
        if (sum < ans)
            ans = sum;
    }
    cout << ans << endl;
    return 0;
}
