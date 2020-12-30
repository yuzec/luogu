#include <cstdio>
using namespace std;

int a[100000005], c[100000005];

int main() {
    int n, q, k=1;
    scanf("%d%d", &n, &q);
    int b[q];
    for (int i=0; i<q; ++i)
        scanf("%d", &b[i]);
    c[1] = 1;
    for (int i=2; i<=n; ++i) {
        if (c[i] == 0)
            a[k++] = i;
        for (int j=1; j<k && i*a[j]<=n; ++j) {
            c[i*a[j]] = 1;
            if (i % a[j] == 0)
                break;
        }
    }
    for (int i=0; i<q; ++i)
        printf("%d\n", a[b[i]]);
    return 0;
}
