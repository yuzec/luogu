#include <iostream>
using namespace std;

struct node {
    int id, study, quality;
    double score;
    int sum() {
        return study + quality;
    }
};

bool isExcellent(node s) {
    return s.sum() > 140 && s.score >= 80;
}

int main() {
    int n;
    cin >> n;
    node student[n];
    for (int i=0; i<n; ++i)
        cin >> student[i].id
            >> student[i].study
            >> student[i].quality;
    for (int i=0; i<n; ++i)
        student[i].score = 0.7 * student[i].study
            + 0.3 * student[i].quality;
    for (int i=0; i<n; ++i)
        cout << (isExcellent(student[i])?
            "Excellent": "Not excellent") << endl;
    return 0;
}
