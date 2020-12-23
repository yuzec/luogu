#include <iostream>
#include <cstring>
using namespace std;

string a, b;

void dfs(int as, int ae, int bs, int be) {
    if (as > ae || bs > be)
        return ;
    for (int i=as; i<=ae; ++i)
        if (a[i] == b[bs]) {
            dfs(as, i-1, bs+1, bs+i-as);
            dfs(i+1, ae, bs+i-as+1, be);
            cout << a[i];
        }
}

int main() {
    cin >> a >> b;
    int l = a.size();
    dfs(0, l-1, 0, l-1);
    cout << endl;
    return 0;
}
