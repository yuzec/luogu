#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    sort(a, a+n);
    long long ans=a[0], mod=1000000007;
    for (int i=1; i<n; ++i)
        ans = (ans * (a[i] - i)) % mod;
    cout << ans << endl;
    return 0;
}
