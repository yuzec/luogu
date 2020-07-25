#include <iostream>
using namespace std;

int n;
char a[10][10], b[10][10], c[10][10], d[10][10];

void rotate(char x[][10], char y[][10]) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            y[j][n-i-1] = x[i][j];
}

void flip(char x[][10], char y[][10]) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            y[i][n-j-1] = x[i][j];
}

bool isEqual(char x[][10], char y[][10]) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            if (x[i][j] != y[i][j])
                return false;
    return true;
}

void copy(char x[][10], char y[][10]) {
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            y[i][j] = x[i][j];
}

int main() {
    cin >> n;
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            cin >> a[i][j];
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            cin >> b[i][j];
    copy(a, d);
    for (int i=1; i<=3; ++i) {
        rotate(d, c);
        if (isEqual(c, b)) {
            cout << i << endl;
            return 0;
        }
        copy(c, d);
    }
    flip(a, d);
    if (isEqual(d, b)) {
        cout << 4 << endl;
        return 0;
    }
    for (int i=0; i<3; ++i) {
        rotate(d, c);
        if (isEqual(c, b)) {
            cout << 5 << endl;
            return 0;
        }
        copy(c, d);
    }
    if (isEqual(a, b)) {
        cout << 6 << endl;
        return 0;
    }
    cout << 7 << endl;
    return 0;
}
