#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, gcd;
    cin >> a >> b >> c;
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);
    gcd = __gcd(a, c);
    cout << a/gcd << '/' << c/gcd <<endl;
    return 0;
}
