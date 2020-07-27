#include <iostream>
#include <cstring>
using namespace std;

string s[10][5] = {
    {"XXX", "X.X", "X.X", "X.X", "XXX"},
    {"..X", "..X", "..X", "..X", "..X"},
    {"XXX", "..X", "XXX", "X..", "XXX"},
    {"XXX", "..X", "XXX", "..X", "XXX"},
    {"X.X", "X.X", "XXX", "..X", "..X"},
    {"XXX", "X..", "XXX", "..X", "XXX"},
    {"XXX", "X..", "XXX", "X.X", "XXX"},
    {"XXX", "..X", "..X", "..X", "..X"},
    {"XXX", "X.X", "XXX", "X.X", "XXX"},
    {"XXX", "X.X", "XXX", "..X", "XXX"},
};

int main() {
    int n;
    string ss;
    cin >> n >> ss;
    for (int i=0; i<5; ++i) {
        for (int j=0; j<n; ++j) {
            cout << s[ss[j]-'0'][i];
            if (j != n-1)
                cout << '.';
        }
        cout << '\n';
    }
    return 0;
}
