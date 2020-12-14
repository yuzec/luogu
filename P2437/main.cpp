#include <iostream>
#include <cstring>
using namespace std;

string add(string x, string y) {
    int lenx = x.size();
    int leny = y.size();
    if (lenx > leny)
        for (int i=0; i<lenx-leny; ++i)
            y = '0' + y;
    else
        for (int i=0; i<leny-lenx; ++i)
            x = '0' + x;
    int jw = 0;
    for (int i=max(lenx, leny)-1; i>=0; --i) {
        x[i] += (y[i] - '0') + jw;
        jw = (x[i] - '0') / 10;
        x[i] = (x[i] - '0') % 10 + '0';
    }
    if (jw != 0)
        x = char(jw + '0') + x;
    return x;
}

int main() {
    int m, n;
    cin >> m >> n;
    string a[n+1];
    a[m] = a[m+1] = "1";
    for (int i=m+2; i<=n; ++i)
        a[i] = add(a[i-1], a[i-2]);
    cout << a[n] << endl;
    return 0;
}
