#include <iostream>
using namespace std;

int f[205][205];

int main() {
    int n, M, T;
    cin >> n >> M >> T;
    int m[M], t[T];
    for (int i=0; i<n; ++i)
        cin >> m[i] >> t[i];
    for (int i=0; i<n; ++i)
        for (int j=M; j>=m[i]; --j)
            for (int k=T; k>=t[i]; --k)
                f[j][k] = max(f[j][k], f[j-m[i]][k-t[i]]+1);
    cout << f[M][T] << endl;
    return 0;
}
