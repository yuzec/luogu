#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int main() {
    int i, n, b, s=0;
    cin >> n >> b;
    int h[n];
    for (i=0; i<n; ++i)
        cin >> h[i];
    sort(h, h+n, cmp);
    for (i=0; i<n && s<b; ++i)
        s += h[i];
    cout << i << endl;
    return 0;
}
