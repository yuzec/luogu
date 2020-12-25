#include <cstdio>
#include <map>
using namespace std;

map<int, int> m;

int main() {
    int n, q;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &q);
    int b[q];
    for (int i=0; i<q; ++i)
        scanf("%d", &b[i]);
    for (int i=0; i<n; ++i)
        m[a[i]] = i + 1;
    for (int i=0; i<q; ++i)
        printf("%d\n", m[b[i]]);
    return 0;
}
