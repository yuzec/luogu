#include <cstdio>
using namespace std;

long long a[100005];

int main() {
    long long n, x, ans=0;
    scanf("%lld%lld", &n, &x);
    for (int i=1; i<=n; ++i)
        scanf("%lld", &a[i]);
    for (int i=1; i<=n; ++i)
        if (a[i] + a[i-1] > x) {
            ans += a[i] + a[i-1] - x;
            a[i] = x - a[i-1];
        }
    printf("%lld\n", ans);
    return 0;
}
