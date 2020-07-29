#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int m) {
    if (m == 0 || m == 1)
        return false;
    for (int i=2; i<=sqrt(m); ++i)
        if (m % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<n; ++i)
        if (isPrime(a[i]))
            cout << a[i] << ' ';
    cout << endl;
    return 0;
}
