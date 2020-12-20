#include <iostream>
using namespace std;

int n, ans[10];

void dfs(int k, int s, int m) {
    if (k == n) {
        for (int i=0; i<m-1; ++i)
            cout << ans[i] << '+';
        cout << ans[m-1] << endl;
    } else if (k < n) {
        for (int i=s; i<n; ++i) {
            ans[m] = i;
            dfs(k+i, i, m+1);
        }
    }
}

int main() {
    cin >> n;
    dfs(0, 1, 0);
    return 0;
}
