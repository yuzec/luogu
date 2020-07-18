#include <iostream>
using namespace std;

int main() {
    int a,i;
    cin >> a;
    for(i = 1; a != 1; a /= 2, ++i);
    cout << i << endl;
    return 0;
}
