#include <iostream>
using namespace std;

int main() {
    int n,ans=1001;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<n; ++i)
        if (ans > a[i])
            ans = a[i];
    cout << ans << endl;
    return 0;
}
