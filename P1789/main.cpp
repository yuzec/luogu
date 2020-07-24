#include <iostream>
#include <cmath>
using namespace std;

int a[101][101];
struct node {
    int x, y;
};

int main() {
    int n, m, k, ans=0;
    cin >> n >> m >> k;
    node torch[m], fluorite[k];
    for (int i=0; i<m; ++i)
        cin >> torch[i].x >> torch[i].y;
    for (int i=0; i<k; ++i)
        cin >> fluorite[i].x >> fluorite[i].y;
    for (int i=0; i<m; ++i)
        for (int p=-2; p<=2; ++p)
            for (int q=-2; q<=2; ++q) {
                int xx = torch[i].x + p;
                int yy = torch[i].y + q;
                if (xx<1 || xx>n || yy<1 || yy>n)
                    continue;
                if (abs(p) + abs(q) <= 2)
                    a[xx][yy] = 1;
            }
    for (int i=0; i<k; ++i)
        for (int p=-2; p<=2; ++p)
            for (int q=-2; q<=2; ++q) {
                int xx = fluorite[i].x + p;
                int yy = fluorite[i].y + q;
                if (xx<1 || xx>n || yy<1 || yy>n)
                    continue;
                a[xx][yy] = 1;
            }
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j)
            if (a[i][j] == 0)
                ++ans;
    cout << ans << endl;
    return 0;
}
