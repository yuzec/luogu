#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    char ans[q];
    string a[n][2], b[q][5];
    for (int i=0; i<n; ++i)
        cin >> a[i][0] >> a[i][1];
    for (int i=0; i<q; ++i)
        for (int j=0; j<5; ++j)
            cin >> b[i][j];
    for (int i=0; i<q; ++i)
        for (int j=0; j<n; ++j)
            if (a[j][0] == b[i][0]) {
                for (int k=1; k<5; ++k)
                    if (a[j][1] == b[i][k]) {
                        ans[i] = k-1+'A';
                        break;
                    }
                break;
            }
    for (int i=0; i<q; ++i)
        cout << ans[i] << endl;
    return 0;
}
