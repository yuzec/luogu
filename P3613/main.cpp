#include <iostream>
#include <map>
using namespace std;

map<int, map<int, int> > m;

int main() {
    int n, q, r, x, y;
    cin >> n >> q;
    for (int i=0; i<q; ++i) {
        cin >> r >> x >> y;
        if (r == 1)
            cin >> m[x][y];
        else
            cout << m[x][y] << endl;
    }
    return 0;
}
