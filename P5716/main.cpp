#include <iostream>
using namespace std;

int main() {
    int year, month, day;
    cin >> year >> month;
    if (month == 2) {
        if (year % 100 != 0 && year % 4 == 0 || year % 400 ==0)
            day = 29;
        else
            day = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11)
        day = 30;
    else
        day = 31;
    cout << day << endl;
    return 0;
}
