#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    long long n, k, rr=1, cc=1;
    scanf("%lld%lld", &n, &k);
    int r[k], c[k];
    for (int i=0; i<k; ++i)
        scanf("%d%d", &r[i], &c[i]);
    sort(r, r+k);
    sort(c, c+k);
    for (int i=1; i<k; ++i) {
        if (r[i] != r[i-1])
            ++rr;
        if (c[i] != c[i-1])
            ++cc;
    }
    printf("%lld\n", n * n - (n - rr) * (n - cc));
    return 0;
}
