#include <iostream>
#include <cmath>
using namespace std;

int n, s[15], b[15], ans=1e9;

void dfs(int k, int ss, int bb) {
    if (k == n) {
        if (ss == 1 && bb == 0)
            return ;
        ans = min(abs(ss - bb), ans);
        return ;
    }
    dfs(k+1, ss*s[k], bb+b[k]);
    dfs(k+1, ss, bb);
}

int main() {
    cin >> n;
    for (int i=0; i<n; ++i)
        cin >> s[i] >> b[i];
    dfs(0, 1, 0);
    cout << ans << endl;
    return 0;
}
