#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "Today, I ate " << x;
    if (x <= 1)
        cout << " apple." << endl;
    else
        cout << " apples." << endl;
    return 0;
}
