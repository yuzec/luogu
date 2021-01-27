#include <iostream>
using namespace std;

int main() {
    int n, m, ans1=0, ans2=0;
    cin >> n >> m;
    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            for (int ii=i+1; ii<=n; ++ii)
                for (int jj=j+1; jj<=m; ++jj)
                    if (ii-i == jj-j)
                        ++ans1;
                    else
                        ++ans2;
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}
