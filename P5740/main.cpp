#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, k=0;
    cin >> n;
    string name[n];
    int score[n][4];
    for (int i=0; i<n; ++i)
        cin >> name[i] >> score[i][0]
            >> score[i][1] >> score[i][2];
    for (int i=0; i<n; ++i)
        score[i][3] = score[i][0] + score[i][1] + score[i][2];
    for (int i=1; i<n; ++i)
        if (score[i][3] > score[k][3])
            k = i;
    cout << name[k] << ' ' << score[k][0] << ' '
        << score[k][1] << ' ' << score[k][2] << endl;
    return 0;
}
