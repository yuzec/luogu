#include <iostream>
using namespace std;

int main() {
    int n, m, x, k;
    cin >> n;
    for (x=100; x>0; --x)
        for (k=1; k<145600; ++k)
            if (n == 52 * (7 * x + 21 * k)) {
                cout << x << '\n' << k << endl;
                return 0;
            }
    return 0;
}
