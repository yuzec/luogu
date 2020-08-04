#include <iostream>
using namespace std;

int compare(int x, int y) {
    if (x == y)
        return 0;
    if (x == 0) {
        if (y == 2 || y == 3)
            return 1;
        else if (y == 1 || y == 4)
            return -1;
    } else if (x == 1) {
        if (y == 3)
            return 1;
        else if (y == 2 || y == 4)
            return -1;
    } else if (x == 2) {
        if (y == 4)
            return 1;
        else if (y == 3)
            return -1;
    } else if (x == 3 && y == 4)
        return 1;
    return - compare(y, x);
}

int main() {
    int n, na, nb, sa, sb, t;
    sa = sb = 0;
    cin >> n >> na >> nb;
    int a[na], b[nb];
    for (int i=0; i<na; ++i)
        cin >> a[i];
    for (int i=0; i<nb; ++i)
        cin >> b[i];
    for (int i=0; i<n; ++i) {
        t = compare(a[i%na], b[i%nb]);
        if (t == 1)
            ++sa;
        else if (t == -1)
            ++sb;
    }
    cout << sa << ' ' << sb << endl;
    return 0;
}
