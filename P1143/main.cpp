#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

char a[35];

int main() {
    int i, n, m, t, d=0;
    string b;
    cin >> n >> b >> m;
    int len = b.size();
    for (i=len-1; i>=0; --i) {
        t = (b[i]<'A')?(b[i]-'0'):(b[i]-'A'+10);
        d += t * pow(n, len-i-1);
    }
    for (i=0; d!=0; ++i) {
        t = d % m;
        a[i] = (t<10)?(t+'0'):(t-10+'A');
        d /= m;
    }
    for (--i; i>=0; --i)
        cout << a[i];
    cout << endl;
    return 0;
}
