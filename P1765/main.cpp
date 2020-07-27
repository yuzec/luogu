#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main() {
    int j=0, ans=0;
    string s;
    getline(cin, s);
    map<char, int> m;
    m[' '] = 1;
    for (char i='a'; i<='z'; ++i, ++j) {
        if (i != 's' && i != 'z') {
            j %= 3;
            m[i] = j + 1;
        } else {
            m[i] = j + 1;
            j = -1;
        }
    }
    for (int i=0; i<s.size(); ++i)
        ans += m[s[i]];
    cout << ans << endl;
    return 0;
}
