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

int main() {
    int d, m, y;

    cin >> d >> m >> y;

    y -= 543;

    int n = daysInMonth(m, y);

    d -= 15;

    if (d <= 0) {
        m -= 1;

        if (m <= 1) {
            m += 12;
            y -= 1;
        }

        d += daysInMonth(m, y);
    }

    y += 543;

    cout << d << "/" << m << "/" << y << endl;
}

// Credits: Pakorn Pongkunakorn, Borwornpob Thumrongchotikhun