#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int m, n, ans = 0, mm=0;
    scanf("%d%d", &m, &n);
    int a[m], b[n];
    for (int i=0; i<m; ++i)
        scanf("%d", &a[i]);
    for (int i=0; i<n; ++i)
        scanf("%d", &b[i]);
    sort(a, a+m);
    sort(b, b+n);
    for (int i=0, j=0; i<m; ++i)
        for (; j<n; ++j)
            if (a[i] < b[j]) {
                b[j] = 0;
                ++mm;
                break;
            }
    if (mm < m)
        ans = 0;
    else
        for (int i=0; i<n; ++i)
            ans += b[i];
    printf("%d\n", ans);
    return 0;
}
