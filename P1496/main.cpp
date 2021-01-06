#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    long long a[n], b[n];
    for (int i=0; i<n; ++i)
        scanf("%lld%lld", &a[i], &b[i]);
    sort(a, a+n);
    sort(b, b+n);
    long long ans = b[0] - a[0];
    for (int i=1; i<n; ++i) {
        ans += b[i] - a[i];
        if (b[i-1] > a[i])
            ans -= b[i-1] - a[i];
    }
    printf("%lld\n", ans);
    return 0;
}
