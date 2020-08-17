#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct node {
    int x, y, z;
}p[50000];

bool cmp(node a, node b) {
    return a.z < b.z;
}

double dist(node a, node b) {
    return sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2) + pow(a.z-b.z, 2));
}

int main() {
    int n;
    double ans = 0;
    scanf("%d", &n);
    for (int i=0; i<n; ++i)
        scanf("%d%d%d", &p[i].x, &p[i].y, &p[i].z);
    sort(p, p+n, cmp);
    for (int i=1; i<n; ++i)
        ans += dist(p[i-1], p[i]);
    printf("%.3f\n", ans);
    return 0;
}
