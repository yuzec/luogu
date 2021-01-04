#include <iostream>
#include <algorithm>
using namespace std;

int t, n, a[10005];

int main() {
    cin >> t;
    for (int i=0; i<t; ++i) {
        cin >> n;
        for (int j=0; j<n; ++j)
            cin >> a[j];
        a[1] /= __gcd(a[0], a[1]);
        for (int j=2; j<n && a[1]!=1; ++j)
            a[1] /= __gcd(a[j], a[1]);
        if (a[1] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
