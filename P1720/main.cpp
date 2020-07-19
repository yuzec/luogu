#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int n;
    double ans;
    scanf("%d", &n);
    ans = (pow((1+sqrt(5))/2.0, n) - pow((1-sqrt(5))/2.0, n)) / sqrt(5);
    printf("%.2f\n", ans);
    return 0;
}
