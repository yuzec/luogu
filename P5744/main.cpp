#include <iostream>
#include <cstring>
using namespace std;

struct node {
    string name;
    int age, score;
};

node train(node s) {
    ++s.age;
    s.score = min(1.2 * s.score, 600.0);
    return s;
}

int main() {
    int n;
    cin >> n;
    node student[n];
    for (int i=0; i<n; ++i)
        cin >> student[i].name
            >> student[i].age
            >> student[i].score;
    for (int i=0; i<n; ++i)
        student[i] = train(student[i]);
    for (int i=0; i<n; ++i)
        cout << student[i].name << ' '
            << student[i].age << ' '
            << student[i].score << endl;
    return 0;
}
