#include <iostream>
#include <iomanip>
using namespace std;

int n, a[10], b[10];

void dfs(int k) {
    if (k > n) {
        for (int i=1; i<=n; ++i)
            cout << setw(5) << a[i];
        cout << endl;
        return ;
    }
    for (int i=1; i<=n; ++i) {
        if (b[i] == 1)
            continue;
        a[k] = i;
        b[i] = 1;
        dfs(k+1);
        b[i] = 0;
    }
}

int main() {
    cin >> n;
    dfs(1);
    return 0;
}
