#include <cstdio>
#include <map>
using namespace std;

map <long long, long long> m;

int main() {
    long long n, c, ans=0;
    scanf("%lld%lld", &n, &c);
    long long a[n];
    for (int i=0; i<n; ++i)
        scanf("%lld", &a[i]);
    for (int i=0; i<n; ++i) {
        ++m[a[i]];
        a[i] -= c;
    }
    for (int i=0; i<n; ++i)
        ans += m[a[i]];
    printf("%lld\n", ans);
    return 0;
}
