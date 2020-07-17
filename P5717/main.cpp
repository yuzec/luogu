#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a + b <= c) {
        cout << "Not triangle" << endl;
        return 0;
    }
    a *= a;
    b *= b;
    c *= c;
    if (a + b == c)
        cout << "Right triangle" << endl;
    else if (a + b > c)
        cout << "Acute triangle" << endl;
    else
        cout << "Obtuse triangle" << endl;
    if (a == b || b == c)
        cout << "Isosceles triangle" << endl;
    if (a == b && b == c)
        cout << "Equilateral triangle" << endl;
    return 0;
}
