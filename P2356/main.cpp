#include <iostream>
using namespace std;

int main() {
    int n, tmp, ans=-1;
    cin >> n;
    int a[n][n];
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            cin >> a[i][j];
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            if (a[i][j] == 0) {
                tmp = 0;
                for (int ii=0; ii<n; ++ii)
                    tmp += a[ii][j];
                for (int jj=0; jj<n; ++jj)
                    tmp += a[i][jj];
                if (tmp > ans)
                    ans = tmp;
            }
    if (ans == -1)
        cout << "Bad Game!" << endl;
    else
        cout << ans << endl;
    return 0;
}
