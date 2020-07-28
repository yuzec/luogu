#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a, b, c;
    string s;
    cin >> s;
    a = b = c = 0;
    for (int i=0; i<s.size(); ++i)
        if (s[i+1] == ':' && s[i+2] == '=')
            if (s[i] == 'a') {
                if (s[i+3] >= '0' && s[i+3] <= '9')
                    a = s[i+3] - '0';
                else if (s[i+3] == 'b')
                    a = b;
                else if (s[i+3] == 'c')
                    a = c;
            }
            else if (s[i] == 'b') {
                if (s[i+3] >= '0' && s[i+3] <= '9')
                    b = s[i+3] - '0';
                else if (s[i+3] == 'a')
                    b = a;
                else if (s[i+3] == 'c')
                    b = c;
            }
            else if (s[i] == 'c') {
                if (s[i+3] >= '0' && s[i+3] <= '9')
                    c = s[i+3] - '0';
                else if (s[i+3] == 'a')
                    c = a;
                else if (s[i+3] == 'b')
                    c = b;
            }
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}
