#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int yearBud, yearChrist;
    cin >> yearBud;

    yearChrist = yearBud - 543;

    //get last 2 digit of yearChrist
    int y = yearChrist % 100;
    int result = y + int(y / 4) + 11;

    cout << result%7 << endl;
}