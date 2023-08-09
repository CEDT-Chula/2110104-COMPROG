#include <iostream>
#include <cmath>

using namespace std;

double physical(int day) {
    return sin((2*M_PI*day)/23);
}

double emotional(int day) {
    return sin((2*M_PI*day)/28);
}

double intellectual(int day) {
    return sin((2*M_PI*day)/33);
}

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

int calculateTotalDays(int d1, int m1, int y1, int d2, int m2, int y2) {
    int part1 = isLeapYear(y1) ? 366 - calculateDaysPassed(d1, m1, y1) : 365 - calculateDaysPassed(d1, m1, y1);

    int part2 = (y2-y1-1) * 365;

    int part3 = calculateDaysPassed(d2, m2, y2);

    int totalDays = part1 + part2 + part3;

    return totalDays;
}

void print_result(int dayPass, double physicalValue, double emotionalValue, double intellectualValue) {
    cout << dayPass << " " << physicalValue << " " << emotionalValue << " " << intellectualValue << endl;
}

double roundResult(double x) {
    return round(x * 100.0) / 100.0;
}

int main() {
    int d1, m1, y1, d2, m2, y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    y1 -= 543;
    y2 -= 543;

    int dayPass = calculateTotalDays(d1, m1, y1, d2, m2, y2);

    double physicalValue = physical(dayPass);
    double emotionalValue = emotional(dayPass);
    double intellectualValue = intellectual(dayPass);

    print_result(dayPass, roundResult(physicalValue), roundResult(emotionalValue), roundResult(intellectualValue));
}






