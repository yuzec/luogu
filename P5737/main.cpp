#include <iostream>
using namespace std;

int a[1500];

bool isLeapYear(int year) {
    return year % 100 != 0 && year % 4 == 0 || year % 400 == 0;
}

int main() {
    int x, y, k=0;
    cin >> x >> y;
    for (int i=x; i<=y; ++i)
        if (isLeapYear(i))
            a[k++] = i;
    cout << k << endl;
    for (int i=0; i<k; ++i)
        cout << a[i] << ' ';
    cout << endl;
    return 0;
}
