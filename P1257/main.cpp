#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    double x[n], y[n], d, ans=2000000000;
    for (int i=0; i<n; ++i)
        scanf("%lf%lf", &x[i], &y[i]);
    for (int i=0; i<n; ++i)
        for (int j=i+1; j<n; ++j) {
            d = sqrt(pow(x[i]-x[j], 2) + pow(y[i] - y[j], 2));
            if (d < ans)
                ans = d;
        }
    printf("%.4lf\n", ans);
    return 0;
}
