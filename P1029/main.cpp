#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int x, y, i, j, t, ans=0;
    scanf("%d%d", &x, &y);
    for (i=x; i<=y; ++i) {
        if (x * y % i == 0)
            j = x * y / i;
            t = __gcd(i, j);
            if (t==x && i*j*1.0/t==y)
                ++ans;
        }
    printf("%d\n", ans);
    return 0;
}
