#include <iostream>
#include <cstring>
using namespace std;

int f[5001];

void mmultip(int a[], int c) {
    int jw = 0;
    for (int i=1; i<=5000; ++i) {
        a[i] = a[i] * c + jw;
        jw = a[i] /10;
        a[i] %= 10;
    }
}

int countA (int n, int a) {
    int i, count = 0;
    memset(f, 0, sizeof(f));
    f[1] = 1;
    for (i=2; i<=n; ++i)
        mmultip(f, i);
    for (i=5000; f[i] == 0; --i);
    for (; i>=1; --i)
        if (f[i] == a)
            ++count;
    return count;
}

int main() {
    int t;
    cin >> t;
    int n[t], a[t], ans[t];
    for (int i=0; i<t; ++i)
        cin >> n[i] >> a[i];
    for (int i=0; i<t; ++i)
        ans[i] = countA(n[i], a[i]);
    for (int i=0; i<t; ++i)
        cout << ans[i] << endl;
    return 0;
}
