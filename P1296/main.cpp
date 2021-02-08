#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, d, ans = 0;
    cin >> n >> d;
    int p[n];
    for (int i=0; i<n; ++i)
        cin >> p[i];
    sort(p, p+n);
    for (int i=0; i<n; ++i)
        for (int j=i+1; j<n && p[j]<=p[i]+d; ++j, ++ans);
    cout << ans << endl;
    return 0;
}
