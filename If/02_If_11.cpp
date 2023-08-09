#include <iostream>
#include <string>
using namespace std;

bool checkIsValidIdentifier(string num) {
    if (num == "01") {
        return true;
    } else if (num == "02") {
        return true;
    } else if (num == "20") {
        return true;
    } else if (num == "21") {
        return true;
    } else if (num == "22") {
        return true;
    } else if (num == "23") {
        return true;
    } else if (num == "24") {
        return true;
    } else if (num == "25") {
        return true;
    } else if (num == "26") {
        return true;
    } else if (num == "27") {
        return true;
    } else if (num == "28") {
        return true;
    } else if (num == "29") {
        return true;
    } else if (num == "30") {
        return true;
    } else if (num == "31") {
        return true;
    } else if (num == "32") {
        return true;
    } else if (num == "33") {
        return true;
    } else if (num == "34") {
        return true;
    } else if (num == "35") {
        return true;
    } else if (num == "36") {
        return true;
    } else if (num == "37") {
        return true;
    } else if (num == "38") {
        return true;
    } else if (num == "39") {
        return true;
    } else if (num == "40") {
        return true;
    } else if (num == "51") {
        return true;
    } else if (num == "53") {
        return true;
    } else if (num == "55") {
        return true;
    } else if (num == "58") {
        return true;
    } else {
        return false;
    }
} 

int main() {
    string num;
    cin >> num;

    if (checkIsValidIdentifier(num)) {
        cout << "OK" << endl;
    } else {
        cout << "Error" << endl;
    }
}