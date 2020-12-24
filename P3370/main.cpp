#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;

ull base=131, mod=212370440130137957ll, prime=233317;

ull hashe(string s) {
    ull ans = 0;
    for (int i=0; i<s.size(); ++i)
        ans = (ans * base + s[i]) % mod + prime;
    return ans;
}

int main() {
    int n, ans = 1;
    cin >> n;
    int h[n];
    string m[n];
    for (int i=0; i<n; ++i)
        cin >> m[i];
    for (int i=0; i<n; ++i)
        h[i] = hashe(m[i]);
    sort(h, h+n);
    for (int i=1; i<n; ++i)
        if (h[i-1] != h[i])
            ++ans;
    cout << ans << endl;
    return 0;
}
