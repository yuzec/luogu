#include <iostream>
#include <cstring>
using namespace std;

int n;
char c[105];

int countVK() {
    int ans = 0;
    for (int i=0; i<n-1; ++i)
        if (c[i] == 'V' && c[i+1] == 'K')
            ++ans;
    return ans;
}

int main() {
    cin >> n >> c;
    int ans = countVK();
    for (int i=0; i<n-1; ++i)
        if (c[i] == c[i+1])
            if (c[i] == 'V') {
                c[i+1] = 'K';
                ans = max(ans, countVK());
                c[i+1] = 'V';
            } else {
                c[i] = 'V';
                ans = max(ans, countVK());
                c[i] = 'K';
            }
    cout << ans << endl;
    return 0;
}
