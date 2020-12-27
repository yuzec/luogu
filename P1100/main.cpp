#include <iostream>
#include <cmath>
using namespace std;

int a[35];

int main() {
    long long n, m=0;
    cin >> n;
    for (int i=32; i>0&&n!=0; --i) {
        a[i] = n % 2;
        n /= 2;
    }
    for (int i=16; i>0; --i)
        m += a[i] * pow(2, 16-i);
    for (int i=32; i>16; --i)
        m += a[i] * pow(2, 48-i);
    cout << m << endl;
    return 0;
}
