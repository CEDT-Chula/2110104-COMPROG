#include <iostream>
#include <cmath>

using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    return (year % 4 == 0);
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 2: return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        default: return 31;
    }
}

int calculateDaysPassed(int d, int m, int y) {
    int daysPassed = d;
    for (int i = 1; i < m; ++i) {
        daysPassed += daysInMonth(i, y);
    }
    return daysPassed;
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    y -= 543;

    int dayPass = calculateDaysPassed(d, m, y);

    cout << dayPass << endl;
}