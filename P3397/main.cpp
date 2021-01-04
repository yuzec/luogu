#include <cstdio>
using namespace std;

int a[1005][1005];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int x1[m], y1[m], x2[m], y2[m];
    for (int i=0; i<m; ++i)
        scanf("%d%d%d%d", &x1[i], &y1[i], &x2[i], &y2[i]);
    for (int i=0; i<m; ++i)
        for (int j=x1[i]; j<=x2[i]; ++j)
            for (int k=y1[i]; k<=y2[i]; ++k)
                ++a[j][k];
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=n; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
