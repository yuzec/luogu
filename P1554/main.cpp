#include <iostream>
using namespace std;

int main() {
    int m, n, ans[10]={0};
    cin >> m >> n;
    for (int i=m; i<=n; ++i) {
        int t = i;
        while (t != 0) {
            ++ans[t % 10];
            t /= 10;
        }
    }
    for (int i=0; i<10; ++i)
        cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
