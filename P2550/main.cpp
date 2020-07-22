#include <iostream>
using namespace std;

int main() {
    int n, sum, a[7], ans[8]={0};
    cin >> n;
    for (int i=0; i<7; ++i)
        cin >> a[i];
    int b[n][7];
    for (int i=0; i<n; ++i)
        for (int j=0; j<7; ++j)
            cin >> b[i][j];
    for (int i=0; i<n; ++i) {
        sum = 0;
        for (int j=0; j<7; ++j)
            for (int k=0; k<7; ++k)
                if (b[i][j] == a[k])
                    ++sum;
        ++ans[sum];
    }
    for (int i=7; i>0; --i)
        cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
