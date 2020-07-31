#include <iostream>
#include <cmath>
using namespace std;

int a[1025][1025];

void solve(int x, int y, int m) {
    if (m == 0)
        return ;
    for (int i=0; i<m/2; ++i)
        for (int j=0; j<m/2; ++j)
            a[x+i][y+j] = 0;
    solve(x+m/2, y, m/2);
    solve(x, y+m/2, m/2);
    solve(x+m/2, y+m/2, m/2);
}

int main() {
    int n, len;
    cin >> n;
    len = pow(2, n);
    for (int i=0; i<len; ++i)
        for (int j=0; j<len; ++j)
            a[i][j] = 1;
    solve(0, 0, len);
    for (int i=0; i<len; ++i) {
        for (int j=0; j<len; ++j)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
