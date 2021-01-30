#include <iostream>
using namespace std;

int a[30005];

int main() {
    int k, sub1, sub2, sub3, n=0;
    cin >> k;
    for (int i=10000; i<=30000; ++i) {
        sub1 = i / 100;
        sub2 = (i - i / 10000 * 10000) / 10;
        sub3 = i - i / 1000 * 1000;
        if (sub1%k==0 && sub2%k==0 && sub3%k==0)
            a[n++] = i;
    }
    if (n == 0)
        cout << "No" << endl;
    else
        for (int i=0; i<n; ++i)
            cout << a[i] << endl;
    return 0;
}
