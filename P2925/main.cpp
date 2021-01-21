#include <iostream>
using namespace std;

int f[50005];

int main() {
    int c, h;
    cin >> c >> h;
    int v[h];
    for (int i=0; i<h; ++i)
        cin >> v[i];
    for (int i=0; i<h; ++i)
        for (int j=c; j>=v[i]; --j)
            f[j] = max(f[j], f[j-v[i]]+v[i]);
    cout << f[c] << endl;
    return 0;
}
