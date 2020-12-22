#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<m; ++i)
        cin >> b[i];
    for (int i=0; i<m; ++i)
        cout << a[b[i]-1] << endl;
    return 0;
}
