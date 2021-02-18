#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n;

string add(string a) {
    string b = a;
    reverse(b.begin(), b.end());
    int x, y, t = 0, len = a.size();
    for (int i=len-1; i>=0; --i) {
        x = (a[i]>='A')?(a[i]-'A'+10):(a[i]-'0');
        y = (b[i]>='A')?(b[i]-'A'+10):(b[i]-'0');
        x += y + t;
        t = (x>=n)?1:0;
        if (t == 1)
            x -= n;
        a[i] = (x>9)?(x-10+'A'):(x+'0');
    }
    if (t == 1)
        a = "1" + a;
    return a;
}

bool isPalindrome(string a) {
    string b = a;
    reverse(b.begin(), b.end());
    return a == b;
}

int main() {
    int i;
    string m;
    cin >> n >> m;
    for (i=0; i<=30&&!isPalindrome(m); ++i)
        m = add(m);
    if (i > 30)
        cout << "Impossible!" << endl;
    else
        cout << "STEP=" << i << endl;
    return 0;
}
