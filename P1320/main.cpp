#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s[200];
    cin >> s[0];
    int len = s[0].length();
    for (int i=1; i<len; ++i)
        cin >> s[i];
    int a[len*len], b[len*len];
    int flag=0, count=0, k=0;
    for (int i=0; i<len; ++i)
        for (int j=0; j<len; ++j)
            if (s[i][j]-'0' == flag)
                ++count;
            else {
                b[k++] = count;
                count = 1;
                flag = !flag;
            }
    b[k++] = count;
    cout << len;
    for (int i=0; i<k; ++i)
        cout << ' ' << b[i];
    cout << endl;
    return 0;
}
