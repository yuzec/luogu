#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int to_int(string s) {
    int n = 0, len = s.size();
    for (int i=0; i<len; ++i)
        n += (s[len-i-1]-'0')*pow(10, i);
    return n;
}

int len_int(int n) {
    int len = n<=0?1:0;
    for (; n; n /= 10, ++len);
    return len;
}

void solve(int p, string a, string b) {
    int c, len;
    if (p == 1) {
        c = to_int(a) + to_int(b);
        len = a.size() + b.size() + len_int(c) + 2;
        cout << a+'+'+b+'=' << c << '\n' << len << endl;
    } else if (p == 2) {
        c = to_int(a) - to_int(b);
        len = a.size() + b.size() + len_int(c) +2;
        cout << a+'-'+b+'=' << c << '\n' << len << endl;
    } else if (p == 3) {
        c = to_int(a) * to_int(b);
        len = a.size() + b.size() + len_int(c) +2;
        cout << a+'*'+b+'=' << c << '\n' << len << endl;
    }
}

int main() {
    int n, p;
    string s, a, b;
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> s;
        if (s == "a") {
            p = 1;
            cin >> a >> b;
        } else if (s == "b") {
            p = 2;
            cin >> a >> b;
        } else if (s == "c") {
            p = 3;
            cin >> a >> b;
        } else {
            a = s;
            cin >> b;
        }
        solve(p, a, b);
    }
    return 0;
}
