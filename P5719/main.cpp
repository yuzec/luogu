#include <cstdio>
using namespace std;

int main() {
    int n, k, sumA, sumB, countA, countB;
    scanf("%d%d", &n, &k);
    sumA = sumB = countA = countB = 0;
    for (int i=1; i<=n; ++i)
        if (i % k) {
            sumB += i;
            ++countB;
        } else {
            sumA += i;
            ++countA;
        }
    printf("%.1f %.1f\n", sumA * 1.0 / countA, sumB * 1.0 / countB);
    return 0;
}
