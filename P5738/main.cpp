#include <cstdio>
using namespace std;

int ans[100];

int main() {
    int n, m, maxm, minm;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            scanf("%d", &a[i][j]);
    for (int i=0; i<n; ++i) {
        maxm = -1, minm = 11;
        for (int j=0; j<m; ++j) {
            ans[i] += a[i][j];
            if (a[i][j] > maxm)
                maxm = a[i][j];
            if (a[i][j] < minm)
                minm = a[i][j];
        }
        ans[i] -= maxm + minm;
    }
    maxm = -1;
    for (int i=0; i<n; ++i)
        if (ans[i] > maxm)
            maxm = ans[i];
    printf("%.2f\n", maxm*1.0/(m-2));
    return 0;
}
