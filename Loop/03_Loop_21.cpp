#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isAlphabetLowerCase(char c) {
    return c >= 'a' && c <= 'z';
}

bool isAlphabetUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isNumber(char c) {
    return c >= '0' && c <= '9';
}

bool isSpecialCharacter(char c) {
    return !isAlphabetLowerCase(c) && !isAlphabetUpperCase(c) && !isNumber(c);
}

int main() {
    string password;
    
    while (cin >> password) {
        bool isLengthEnoughForStrongPassword = password.length() >= 12;
        bool isLengthEnoughForWeakPassword = password.length() >= 8;
        bool isContainLowerCase = false;
        bool isContainUpperCase = false;
        bool isContainNumber = false;
        bool isContainSpecialCharacter = false;

        for (int i = 0; i < password.length(); i++) {
            if (isAlphabetLowerCase(password[i])) {
                isContainLowerCase = true;
            } else if (isAlphabetUpperCase(password[i])) {
                isContainUpperCase = true;
            } else if (isNumber(password[i])) {
                isContainNumber = true;
            } else if (isSpecialCharacter(password[i])) {
                isContainSpecialCharacter = true;
            }
        }

        if (isLengthEnoughForStrongPassword && isContainLowerCase && isContainUpperCase && isContainNumber && isContainSpecialCharacter) {
            cout << ">> strong" << endl;
        } else if (isLengthEnoughForWeakPassword && isContainLowerCase && isContainUpperCase && isContainNumber) {
            cout << ">> weak" << endl;
        } else {
            cout << ">> invalid" << endl;
        }
    }

    
}