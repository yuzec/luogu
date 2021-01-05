#include <cstdio>
using namespace std;

int main() {
    int n, k;
    long long sum=0, tmp=0;
    scanf("%d%d", &n, &k);
    long long a[n], b[n]={0};
    for (int i=1; i<n; ++i)
        scanf("%lld", &a[i]);
    for (int i=0; i<k; ++i)
        b[1] += a[1+i];
    for (int i=2; i<=n-k; ++i)
        b[i] = b[i-1] + a[i+k-1] - a[i-1];
    for (int i=1; i<n; ++i) {
        sum += a[i];
        if (tmp < b[i])
            tmp = b[i];
    }
    printf("%lld\n", sum - tmp);
    return 0;
}
