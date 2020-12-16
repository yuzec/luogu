#include <cstdio>
#include <cmath>
using namespace std;

double a, b, c, d;

double f(double x) {
    return a*pow(x, 3)+b*pow(x,2)+c*x+d;
}

int main() {
    int k = 0;
    double l, r, m, lv, rv, mv, ans[3];
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    for (double i=-100; i<100; ++i) {
        lv = f(i);
        rv = f(i+1);
        if (lv == 0) {
            ans[k++] = i;
            continue;
        }
        if (lv*rv < 0) {
            l = i;
            r = i + 1;
            while (l < r) {
                m = (l + r) / 2;
                mv = f(m);
                lv = f(l);
                if (mv == 0) {
                    ans[k++] = m;
                    break;
                }
                if (mv*lv < 0)
                    r = m - 0.0001;
                else
                    l = m + 0.0001;
            }
            if (l >= r)
                if (fabs(f(l)) < fabs(f(r)))
                    ans[k++] = l;
                else
                    ans[k++] = r;
        }
    }
    if (f(100) == 0)
        ans[k++] = 100;
    for (int i=0; i<3; ++i)
        printf("%.2lf ", ans[i]);
    printf("\n");
    return 0;
}
