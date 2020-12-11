#include <iostream>
using namespace std;

int n, a[20][20];

int solve(int ol, int il) {
    if (a[ol][il] != 0)
        return a[ol][il];
    if (ol == n || il == 0)
        a[ol][il] = 1;
    else if (ol + il == n)
        a[ol][il] = solve(ol, il-1);
    else
        a[ol][il] = solve(ol+1, il) + solve(ol, il-1);
    return a[ol][il];
}

int main() {
    cin >> n;
    cout << solve(0, n) << endl;
    return 0;
}
