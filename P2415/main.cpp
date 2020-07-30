#include <iostream>
#include <cmath>
using namespace std;

int s[30];

int main() {
    int k = 0;
    long long ans = 0;
    while (cin >> s[k++]);
    for (int i=0; i<k-1; ++i)
        ans += s[i];
    ans *= pow(2, k-2);
    cout << ans << endl;
    return 0;
}
