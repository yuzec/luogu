#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    bool isEven = (x % 2 == 0);
    bool inScope = (x > 4 && x <= 12);
    if (isEven && inScope)
        cout << 1 << ' ';
    else
        cout << 0 << ' ';
    if (isEven || inScope)
        cout << 1 << ' ';
    else
        cout << 0 << ' ';
    if (isEven && !inScope || !isEven && inScope)
        cout << 1 << ' ';
    else
        cout << 0 << ' ';
    if (!isEven && !inScope)
        cout<< 1 << endl;
    else
        cout<< 0 <<endl;
    return 0;
}
