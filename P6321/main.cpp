#include <iostream>
using namespace std;

int main() {
    int r, c, zr, zc;
    cin >> r >> c >> zr >> zc;
    char a[r][c];
    for (int i=0; i<r; ++i)
        for (int j=0; j<c; ++j)
            cin >> a[i][j];
    for (int i=0; i<r; ++i)
        for (int m=0; m<zr; ++m) {
            for (int j=0; j<c; ++j)
                for (int n=0; n<zc; ++n)
                    cout << a[i][j];
            cout << '\n';
        }
    return 0;
}
