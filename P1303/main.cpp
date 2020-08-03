#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 50000

int m[MAXN], n[MAXN], t[MAXN];

void multip(string x, string y) {
    int lenx = x.size();
    int leny = y.size();
    int len = lenx + leny;
    for (int i=0; i<lenx; ++i)
        m[i] = x[lenx-i-1] - '0';
    for (int i=0; i<leny; ++i)
        n[i] = y[leny-i-1] - '0';
    for (int i=0; i<lenx; ++i)
        for (int j=0; j<leny; ++j)
            t[i+j] += m[i] * n[j];
    for (int i=0; i<len; ++i)
        if (t[i] > 9) {
            t[i+1] += t[i] / 10;
            t[i] %= 10;
        }
    while (t[len-1] == 0 && len > 1)
        --len;
    for (int i=len-1; i>=0; --i)
        cout << t[i];
}

int main() {
    string a, b;
    cin >> a >> b;
    multip(a, b);
    cout << endl;
    return 0;
}
