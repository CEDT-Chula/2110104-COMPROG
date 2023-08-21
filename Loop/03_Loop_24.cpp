#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Run-length encoding

int main() {
    string input;
    int counter;

    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        counter = 1;
        while (input[i] == input[i+1]) {
            counter++;
            i++;
        }
        cout << input[i] << counter;
    }
}