#include <iostream>
using namespace std;

int a[250][250];

int main() {
    int x, y, t, ans=0;
    cin >> x >> y >> t;
    int xi[t], yi[t], xu[t], yu[t];
    for (int i=0; i<t; ++i)
        cin >> xi[i] >> yi[i] >> xu[i] >> yu[i];
    for (int i=0; i<t; ++i)
        for (int j=xi[i]; j<=xu[i]; ++j)
            for (int k=yi[i]; k<=yu[i]; ++k)
                a[y-k+1][j] = 1;
    for (int i=1; i<=y; ++i)
        for (int j=1; j<=x; ++j)
            if (a[i][j] == 1)
                ++ans;
    cout << ans << endl;
    return 0;
}
