#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    stack<int> s;
    cin >> n;
    s.push(n);
    while (n != 1) {
        if (n % 2)
            n = 3*n + 1;
        else
            n /= 2;
        s.push(n);
    }
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
    return 0;
}
