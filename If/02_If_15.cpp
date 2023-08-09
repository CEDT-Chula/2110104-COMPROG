#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool checkIsMobileNumber(string number) {
    if (number.length() != 10) return false;

    if (number[0] + number[1] == '0' + '8' || number[0] + number[1] == '0' + '9' || number[0] + number[1] == '0' + '6') {
        return true;
    } else {
        return false;
    }
}

int main() {
    string number;
    cin >> number;

    if (checkIsMobileNumber(number)) {
        cout << "Mobile number" << endl;
    } else {
        cout << "Not a mobile number" << endl;
    }
}