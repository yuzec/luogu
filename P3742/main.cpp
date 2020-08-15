#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    string x, y;
    cin >> x >> y;
    for (int i=0; i<n; ++i)
        if (x[i] < y[i]) {
            cout << -1 << endl;
            return 0;
        }
    cout << y << endl;
    return 0;
}
