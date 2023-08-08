#include <iostream>
#include <cmath>

using namespace std;

double checkLastDigitID(string id) {
    return (11 - ((13*(id[0] - '0')) + (12*(id[1] - '0')) + (11*(id[2] - '0')) + (10*(id[3] - '0')) + (9*(id[4] - '0')) + (8*(id[5] - '0')) + (7*(id[6] - '0')) + (6*(id[7] - '0')) + (5*(id[8] - '0')) + (4*(id[9] - '0')) + (3*(id[10] - '0')) + (2*(id[11] - '0')))%11)%10;
}

void printFormattedID(string id, int lastDigit) {
    cout << id[0] << '-';
    cout << id.substr(1, 4) << '-';
    cout << id.substr(5, 5) << '-';
    cout << id.substr(10, 2) << '-';
    cout << lastDigit << endl;
}

int main() {
    string id;
    cin >> id;

    printFormattedID(id, checkLastDigitID(id));
}
