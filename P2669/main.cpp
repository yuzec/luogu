#include <iostream>
using namespace std;

int main() {
    int k, day=0, ans=0;
    cin >> k;
    for (int i=1; day<k; ++i)
        for (int j=0; j<i && day<k; ++j, ++day)
            ans += i;
    cout << ans << endl;
    return 0;
}
