#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n[15];
    cin >> n;
    int i = 0;
    int j = strlen(n) - 1;
    if (n[0] == '-') {
        i = 1;
        cout << '-';
    }
    for (; n[j] == '0'; --j);
    for (; j>=i; --j)
        cout << n[j];
    cout << endl;
    return 0;
}
