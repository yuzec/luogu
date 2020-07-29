#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
#define MAXN 1000000

int a[MAXN], b[MAXN];

int main() {
    int n, k=0;
    cin >> n;
    string name[n];
    int score[n][4];
    for (int i=0; i<n; ++i) {
        cin >> name[i] >> score[i][0]
            >> score[i][1] >> score[i][2];
        score[i][3] = score[i][0] + score[i][1] + score[i][2];
    }
    for (int i=0; i<n; ++i)
        for (int j=i+1; j<n; ++j)
            if (abs(score[i][0] - score[j][0]) <= 5
                    && abs(score[i][1] - score[j][1]) <= 5
                    && abs(score[i][2] - score[j][2]) <= 5
                    && abs(score[i][3] - score[j][3]) <= 10) {
                a[k] = i;
                b[k++] = j;
            }
    for (int i=0; i<k; ++i)
        cout << name[a[i]] << ' ' << name[b[i]] << endl;
    return 0;
}
