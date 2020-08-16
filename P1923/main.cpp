#include <cstdio>
using namespace std;

int a[5000000];

int find_kth(int l, int r, int k) {
    int key = a[l];
    int low = l, high = r;
    while (high > low) {
        while (a[high] >= key && high > low)
            --high;
        a[low] = a[high];
        while (a[low] <= key && high > low)
            ++low;
        a[high] = a[low];
    }
    a[low] = key;
    if (k == low)
        return a[low];
    else if (k < low)
        return find_kth(l, low-1, k);
    else
        return find_kth(low+1, r, k);
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i=0; i<n; ++i)
        scanf("%d", &a[i]);
    printf("%d\n", find_kth(0, n-1, k));
    return 0;
}
