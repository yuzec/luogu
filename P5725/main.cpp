#include <iostream>
using namespace std;

int main() {
    int n, a=1;
    cin >> n;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            if (a < 10)
                cout << 0;
            cout << a;
            ++a;
        }
        cout << '\n';
    }
    cout << '\n';
    a = 1;
    for (int i=1; i<=n; ++i) {
        for (int j=0; j<n-i; ++j)
            cout << "  ";
        for (int j=0; j<i; ++j) {
            if (a < 10)
                cout << 0;
            cout << a;
            ++a;
        }
        cout << '\n';
    }
    cout << endl;
    return 0;
}
