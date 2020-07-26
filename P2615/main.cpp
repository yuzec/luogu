#include <iostream>
using namespace std;

int a[40][40];
struct node {
    int x,y;
}idx[1600];

int main() {
    int n;
    cin >> n;
    a[0][n/2] = 1;
    idx[1].x = 0;
    idx[1].y = n/2;
    for (int i=2; i<=n*n; ++i) {
        if (idx[i-1].x == 0 && idx[i-1].y != n-1) {
            a[n-1][idx[i-1].y+1] = i;
            idx[i].x = n-1;
            idx[i].y = idx[i-1].y+1;
        } else if (idx[i-1].y == n-1 && idx[i-1].x != 0) {
            a[idx[i-1].x-1][0] = i;
            idx[i].x = idx[i-1].x-1;
            idx[i].y = 0;
        } else if (idx[i-1].x == 0 && idx[i-1].y == n-1) {
            a[idx[i-1].x+1][idx[i-1].y] = i;
            idx[i].x = idx[i-1].x+1;
            idx[i].y = idx[i-1].y;
        } else {
            if (a[idx[i-1].x-1][idx[i-1].y+1] == 0) {
                a[idx[i-1].x-1][idx[i-1].y+1] = i;
                idx[i].x = idx[i-1].x-1;
                idx[i].y = idx[i-1].y+1;
            } else {
                a[idx[i-1].x+1][idx[i-1].y] = i;
                idx[i].x = idx[i-1].x+1;
                idx[i].y = idx[i-1].y;
            }
        }
    }
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
