#include <iostream>
using namespace std;

int main() {
    int n, maxn=-1, minn=1001;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<n; ++i)
        if (a[i] > maxn)
            maxn = a[i];
        else if (a[i] < minn)
            minn = a[i];
    cout << maxn - minn << endl;
    return 0;
}
