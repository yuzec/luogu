#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, ans = 1;
    cin >> n;
    int a[n];
    char c;
    for (int i=0; i<n; ++i) {
        cin >> c;
        a[i] = c - '0';
    }
    while (prev_permutation(a, a+n))
        ++ans;
    cout << ans << endl;
    return 0;
}
