#include <iostream>
using namespace std;

int main() {
    int n, l, r, ans = 1;
    cin >> n;
    long long h[n];
    for (int i=0; i<n; ++i)
        cin >> h[i];
    for (int i=0; i<n; ++i) {
        l = r = i;
        while (l>0 && h[l-1] <= h[l])
            --l;
        while (r<n && h[r+1] <= h[r])
            ++r;
        ans = max(ans, r-l+1);
    }
    cout << ans << endl;
    return 0;
}
