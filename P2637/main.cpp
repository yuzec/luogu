#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, sum, ans1, ans2=0;
    cin >> n >> m;
    int p[m];
    for (int i=0; i<m; ++i)
        cin >> p[i];
    sort(p, p+m);
    for (int i=0; i<m; ++i) {
        sum = 0;
        for (int j=0; j<m; ++j)
            if (p[j] >= p[i])
                ++sum;
        sum *= p[i];
        if (sum > ans2) {
            ans1 = p[i];
            ans2 = sum;
        }
    }
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}
