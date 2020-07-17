#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int a[3];
    for (int i=0; i<3; ++i)
        cin >> a[i];
    sort(a, a+3);
    map<char, int> m;
    m['A'] = a[0];
    m['B'] = a[1];
    m['C'] = a[2];
    char b[4];
    cin >> b;
    for (int i=0; i<3; ++i)
        cout << m[b[i]] <<' ';
    cout << endl;
    return 0;
}
