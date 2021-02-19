#include <cstdio>
#include <algorithm>
using namespace std;

long long a[200005], b[10005][2], t;

int main() {
    int n, k = 0;
    scanf("%d", &n);
    for (int i=0; i<n; ++i)
        scanf("%lld", &a[i]);
    sort(a, a+n);
    for (int i=0; i<n; ++i)
        if (a[i] != a[i+1]) {
            b[k][0] = a[i];
            b[k++][1] = t + 1;
            t = 0;
        }
        else
            ++t;
    for (int i=0; i<k; ++i)
        printf("%lld %lld\n", b[i][0], b[i][1]);
    return 0;
}
