#include <cstdio>
using namespace std;

int main() {
    int n, sum=0, maxn=-1, minn=11;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; ++i)
        scanf("%d", &a[i]);
    for (int i=0; i<n; ++i) {
        if (a[i] > maxn)
            maxn = a[i];
        if (a[i] < minn)
            minn = a[i];
        sum += a[i];
    }
    sum -= maxn + minn;
    printf("%.2f\n", sum * 1.0 / (n-2));
    return 0;
}
