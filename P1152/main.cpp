#include <iostream>
#include <cmath>
using namespace std;

int f[200000000];

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=1; i<n; ++i)
        f[abs(a[i] - a[i-1])] = 1;
    for (int i=1; i<n; ++i)
        if (f[i] == 0) {
            cout << "Not jolly" << endl;
            return 0;
        }
    cout << "Jolly" << endl;
    return 0;
}
