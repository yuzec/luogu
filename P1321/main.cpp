#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int boy=0, girl=0;
    string l;
    cin >> l;
    for (int i=0; i<l.size(); ++i) {
        if (l[i] == 'b' || l[i+1] == 'o' || l[i+2] == 'y')
            ++boy;
        if (l[i] == 'g' || l[i+1] == 'i' || l[i+2] == 'r' || l[i+3] == 'l')
            ++girl;
    }
    cout << boy << '\n' << girl << endl;
    return 0;
}
