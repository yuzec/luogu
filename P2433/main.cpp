#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define pi 3.141593

int main () {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!" << endl;
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
    } else if (T == 3) {
        cout << 14 / 4 << '\n'
            << 14 / 4 * 4 << '\n'
            << 14 - 14 / 4 * 4 << endl;
    } else if (T == 4) {
        printf("%.3f\n", 500.0 / 3);
    } else if (T == 5) {
        cout << (260 + 220) / (12 + 20) << endl;
    } else if (T == 6) {
        cout << sqrt(6 * 6 + 9 * 9) <<endl;
    } else if (T == 7) {
        cout << 100 + 10 << '\n'
            << 100 + 10 - 20 << '\n'
            << 0 << endl;
    } else if (T == 8) {
        cout << 2 * 5 * pi << '\n'
            << 5 * 5 * pi << '\n'
            << 4 * 5 * 5 * 5 * pi / 3 << endl;
    } else if (T == 9) {
        int n=1;
        for (int i=0;i<3;++i)
            n=(n+1)*2;
        cout << n << endl;
    } else if (T == 10) {
        float p,s,e;
        p = (8 * 30 - 10 * 6) * 1.0 / (30 - 6);
        s = 8 * 30 - 30 * p;
        e = s + 10 * p;
        cout << e / 10 << endl;
    } else if (T == 11) {
        cout << 100.0 / (8 - 5) << endl;
    } else if (T == 12) {
        cout << 'M' - 'A' + 1 << '\n'
            << char('A' + 18 -1) << endl;
    } else if (T == 13) {
        int v;
        v = 4 * 4 * 4 * 4 * pi / 3 + 10 * 10 * 10 * 4 * pi / 3;
        cout << int(cbrt(v)) << endl;
    } else if (T == 14) {
        int p,v,i=1;
        for(;i<120;++i) {
            p = 10+110-i;
            v = p * i;
            if (v == 3500)
                break;
        }
        cout << i <<endl;
    }
    return 0;
}
