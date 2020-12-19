#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int m, n, l, r, mid, ans=0;
    scanf("%d%d", &m, &n);
    int a[m], b[n];
    for (int i=0; i<m; ++i)
        scanf("%d", &a[i]);
    for (int i=0; i<n; ++i)
        scanf("%d", &b[i]);
    sort(a, a+m);
    for (int i=0; i<n; ++i) {
        l = 0;
        r = m-1;
        while (l < r) {
            mid = (l + r) / 2;
            if (a[mid] <= b[i])
                l = mid + 1;
            else
                r = mid;
        }
        if (b[i] <= a[0])
            ans += a[0] - b[i];
        else
            ans += min(abs(a[l-1]-b[i]), abs(a[l]-b[i]));
    }
    printf("%d\n", ans);
    return 0;
}
