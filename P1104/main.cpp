#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct node {
    string s;
    int id, y, m, d;
}student[100];

bool cmp(node a, node b) {
    if (a.y == b.y)
        if (a.m == b.m)
            if (a.d == b.d)
                return a.id > b.id;
            else
                return a.d < b.d;
        else
            return a.m < b.m;
    else
        return a.y < b.y;
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        student[i].id = i;
        cin >> student[i].s
            >> student[i].y
            >> student[i].m
            >> student[i].d;
    }
    sort(student, student+n, cmp);
    for (int i=0; i<n; ++i)
        cout << student[i].s << endl;
    return 0;
}
