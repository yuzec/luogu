#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, m, k=0;
    cin >> n >> m;
    int dir[n], s[m][2];
    string name[n];
    for (int i=0; i<n; ++i)
        cin >> dir[i] >> name[i];
    for (int i=0; i<m; ++i)
        cin >> s[i][0] >> s[i][1];
    for (int i=0; i<m; ++i)
        if (dir[k] != s[i][0])
            k = (k + s[i][1]) % n;
        else
            k = (k - s[i][1] + n) % n;
    cout << name[k] << endl;
    return 0;
}
