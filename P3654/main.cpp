#include <iostream>
using namespace std;

int main() {
    int r, c, k, flag, ans=0;
    cin >> r >> c >> k;
    char a[r][c];
    for (int i=0; i<r; ++i)
        for (int j=0; j<c; ++j)
            cin >> a[i][j];
    for (int i=0; i<r; ++i)
        for (int j=0; j<c; ++j) {
            flag = 1;
            for (int m=0; m<k; ++m)
                if (i+m >= r || a[i+m][j] == '#') {
                    flag = 0;
                    break;
                }
            ans += flag;
            flag = 1;
            for (int m=0; m<k; ++m)
                if (j+m >= c || a[i][j+m] == '#') {
                    flag = 0;
                    break;
                }
            ans += flag;
        }
    if (k == 1)
        ans /= 2;
    cout << ans << endl;
    return 0;
}
