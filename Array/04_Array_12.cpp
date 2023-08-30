#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

string names[10][2] = {
    {"Robert", "Dick"},
    {"William", "Bill"},
    {"James", "Jim"},
    {"John", "Jack"},
    {"Margaret", "Peggy"},
    {"Edward", "Ed"},
    {"Sarah", "Sally"},
    {"Andrew", "Andy"},
    {"Anthony", "Tony"},
    {"Deborah", "Debbie"},
};

int main() {
    bool isFound = false;

    int n;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; ++i) {
        isFound = false;

        string name;
        getline(cin, name);

        for (int j = 0; j < 10; ++j)
        {
            if (names[j][0] == name) {
                cout << names[j][1] << endl;
                isFound = true;
                break;
            }
            else if (names[j][1] == name) {
                cout << names[j][0] << endl;
                isFound = true;
                break;
            }

            
        }

        if (isFound == false) {
            cout << "Not found" << endl;
        }
    }

    
}