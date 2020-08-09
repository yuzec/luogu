#include <iostream>
using namespace std;

int a[105][105],c[105][105];

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int x1[x], y1[x], x2[x], y2[x], yx[y], yy[y];
    for (int i=0; i<x; ++i)
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    for (int i=0; i<y; ++i)
        cin >> yx[i] >> yy[i];
    for (int i=0; i<x; ++i)
        for (int j=x1[i]; j<=x2[i]; ++j)
            for (int k=y1[i]; k<=y2[i]; ++k) {
                ++a[j][k];
                c[j][k] = i+1;
            }
    for (int i=0; i<y; ++i)
        if (a[yx[i]][yy[i]] != 0)
            cout << "Y " << a[yx[i]][yy[i]]
                << ' ' << c[yx[i]][yy[i]] << endl;
        else
            cout << 'N' << endl;
    return 0;
}
