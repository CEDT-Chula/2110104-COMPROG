#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Function to turn month number into month name

string getMonthName(int monthNum) {
    string monthName;
    switch (monthNum) {
        case 1:
            monthName = "JAN";
            break;
        case 2:
            monthName = "FEB";
            break;
        case 3:
            monthName = "MAR";
            break;
        case 4:
            monthName = "APR";
            break;
        case 5:
            monthName = "MAY";
            break;
        case 6:
            monthName = "JUN";
            break;
        case 7:
            monthName = "JUL";
            break;
        case 8:
            monthName = "AUG";
            break;
        case 9:
            monthName = "SEP";
            break;
        case 10:
            monthName = "OCT";
            break;
        case 11:
            monthName = "NOV";
            break;
        case 12:
            monthName = "DEC";
            break;
        default:
            monthName = "Invalid month number";
            break;
    }
    return monthName;
}

// receive date from users in this format dd/mm/yyyy and return in this this format monthName dd, yyyy

string dateConverter(string date) {
    string monthName;
    int monthNum = stoi(date.substr(3, 2));
    monthName = getMonthName(monthNum);
    string day = date.substr(0, 2);
    int onlyDay = stoi(day);
    string year = date.substr(6, 4);
    //turn gergorian year to buddhist year
    int buddhistYear = stoi(year) - 543;
    string newDate = monthName + " " + to_string(onlyDay) + ", " + to_string(buddhistYear);
    return newDate;
}

int main() {
    string date;
    cin >> date;
    cout << dateConverter(date);
    return 0;
}