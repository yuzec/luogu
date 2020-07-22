#include <iostream>
using namespace std;

int f[21][21][21];

int main() {
    int w, x, h, q, ans=0;
    cin >> w >> x >> h >> q;
    int a[q][6];
    for (int i=0; i<q; ++i)
        for (int j=0; j<6; ++j)
            cin >> a[i][j];
    for (int n=0; n<q; ++n)
        for (int i=a[n][0]; i<=a[n][3]; ++i)
            for (int j=a[n][1]; j<=a[n][4]; ++j)
                for (int k=a[n][2]; k<=a[n][5]; ++k)
                    f[i][j][k] = 1;
    for (int i=1; i<=w; ++i)
        for (int j=1; j<=x; ++j)
            for (int k=1; k<=h; ++k)
                if (f[i][j][k] == 0)
                    ++ans;
    cout << ans << endl;
    return 0;
}
