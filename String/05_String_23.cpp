#include <iostream>
#include <string>

using namespace std;

void incrementPlate(string plate, int incrementBy) {
    int numPart = stoi(plate.substr(4));
    char alphaFirst = plate[1];
    char alphaSecond = plate[2];
    char prefix = plate[0];

    numPart += incrementBy;

    while (numPart > 999) {
        numPart -= 1000;
        
        if (alphaSecond < 'Z') {
            alphaSecond++;
        } else {
            alphaSecond = 'A';
            
            if (alphaFirst < 'Z') {
                alphaFirst++;
            }  else {
                alphaFirst = 'A';
                prefix++;
            }
        }
    }

    string result = prefix + string(1, alphaFirst) + string(1, alphaSecond) + '-' + to_string(numPart);

    while (result.length() < 7) {
        result.insert(4, "0");
    }

    cout << result;
}

int main() {
    string plate;
    int incrementBy;
    cin >> plate >> incrementBy;

    incrementPlate(plate, incrementBy);
}