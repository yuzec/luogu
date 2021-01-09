#include <iostream>
using namespace std;

long long stirling(int n, int m) {
    if (m==n || m==1)
        return 1;
    if (m>n || m==0)
        return 0;
    return m*stirling(n-1, m)+stirling(n-1, m-1);
}

long long power(int n) {
    if (n == 1)
        return 1;
    return n * power(n - 1);
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << stirling(n, r) * power(r) << endl;
    return 0;
}
