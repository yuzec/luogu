#include <iostream>
using namespace std;

int f[10005];

int find(int k) {
    if (f[k] == k)
        return k;
    return f[k] = find(f[k]);
}

void combine(int x, int y) {
    f[find(y)] = find(x);
}

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int M[m][2], P[p][2];
    for (int i=0; i<m; ++i)
        cin >> M[i][0] >> M[i][1];
    for (int i=0; i<p; ++i)
        cin >> P[i][0] >> P[i][1];
    for (int i=1; i<=n; ++i)
        f[i] = i;
    for (int i=0; i<m; ++i)
        combine(M[i][0], M[i][1]);
    for (int i=0; i<p; ++i)
        if (find(P[i][0]) == find(P[i][1]))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    return 0;
}
