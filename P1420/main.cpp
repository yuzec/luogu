#include <iostream>
using namespace std;

int main() {
    int n, t=1, ans=1;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=1; i<n; ++i)
        if (a[i] == a[i-1] + 1)
            ++t;
        else {
            if (t > ans)
                ans = t;
            t = 1;
        }
    cout << ans << endl;
    return 0;
}