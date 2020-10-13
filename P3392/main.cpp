#include <iostream>
using namespace std;

int n, m, w[50], b[50], r[50];

int main() {
    char c;
    int tmp, ans=2500;
    cin >> n >> m;
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j) {
            cin >> c;
            if (c == 'W')
                ++w[i];
            else if (c == 'B')
                ++b[i];
            else
                ++r[i];
        }
    for (int i=1; i<n-1; ++i)
        for (int j=i+1; j<n; ++j) {
            tmp = 0;
            for (int k=0; k<i; ++k)
                tmp += b[k] + r[k];
            for (int k=i; k<j; ++k)
                tmp += w[k] + r[k];
            for (int k=j; k<n; ++k)
                tmp += w[k] + b[k];
            ans = min(ans, tmp);
        }
    cout << ans << endl;
    return 0;
}
