#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int m, len;
    string n;
    cin >> m >> n;
    len = n.size();
    for (int i=0; i<len; ++i)
        if (n[i] != '0') {
            if (i != 0)
                cout << '+';
            cout << n[i] << '*' << m << '^' << len-i-1;
        }
    cout << endl;
    return 0;
}
