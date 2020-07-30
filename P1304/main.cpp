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
    for (int i=2; i<n; ++i)
        a[i] = isPrime(i)? 1: 0;
    for (int i=4; i<=n; i+=2)
        for (int j=2; j<i; ++j)
            if (a[j] && a[i-j]) {
                cout << i << '=' << j
                    << '+' << i-j << endl;
                break;
            }
    return 0;
}
