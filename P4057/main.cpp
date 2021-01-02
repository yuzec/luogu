#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    long long a, b, c, ans;
    scanf("%lld%lld%lld", &a, &b, &c);
    ans = a * b / __gcd(a, b);
    ans = ans * c / __gcd(ans, c);
    printf("%lld\n", ans);
    return 0;
}
