#include <cstdio>
#include <cmath>
using namespace std;
#define pi 3.1415926535

double d[1005][1005];

int main() {
    int n;
    scanf("%d", &n);
    double c[n][2], tmp, ans=1000000000;
    for (int i=0; i<n; ++i)
        scanf("%lf%lf", &c[i][0], &c[i][1]);
    for (int i=0; i<n; ++i)
        for (int j=i+1; j<n; ++j)
            d[i][j] = d[j][i] = pow(c[i][0]-c[j][0], 2)+pow(c[i][1]-c[j][1], 2);
    for (int i=0; i<n; ++i) {
        tmp = 0;
        for (int j=0; j<n; ++j)
            if (d[i][j] > tmp)
                tmp = d[i][j];
        if (tmp < ans)
            ans = tmp;
    }
    printf("%.4lf\n", pi*ans);
    return 0;
}
