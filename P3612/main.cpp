#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    string s;
    long long n, l;
    cin >> s >> n;
    int i;
    --n;
    while (s.size() <= n) {
        for (i=0; s.size() * pow(2, i) <= n; ++i);
        l = s.size() * pow(2, i-1);
        n = (n + l - 1) % l;
    }
    cout << s[n] << endl;
    return 0;
}
