#include <iostream>
using namespace std;

int a[2000], c[2000];

void pplus(int a[], int c[]) {
    int jw = 0;
    for (int i=1; i<=1000; ++i) {
        c[i] += a[i] + jw;
        jw = c[i] / 10;
        c[i] %= 10;
    }
}

void mmultip(int a[], int c) {
    int jw = 0;
    for (int i=1; i<=1000; ++i) {
        a[i] = a[i] * c + jw;
        jw = a[i] /10;
        a[i] %= 10;
    }
}

int main() {
    int n, i;
    cin >> n;
    a[1] = 1;
    for (i=1; i<=n; ++i) {
        mmultip(a, i);
        pplus(a, c);
    }
    for (i=1000; c[i]==0; --i);
    for (; i>=1; --i)
        cout << c[i];
    cout << endl;
    return 0;
}
