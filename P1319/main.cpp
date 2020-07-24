#include <iostream>
using namespace std;

int main() {
    int n, k=0, m=0, flag=1;
    cin >> n;
    int a[n*n], b[n*n];
    for (int sum=0; sum < n*n; ++k) {
        cin >> a[k];
        sum += a[k];
    }
    for (int i=0; i<k; ++i) {
        flag = !flag;
        for (int j=0; j<a[i]; ++j)
            b[m++] = flag;
    }
    for (int i=0; i<n*n; ++i) {
        if (i != 0 && i%n == 0)
            cout << '\n';
        cout << b[i];
    }
    cout << endl;
    return 0;
}
