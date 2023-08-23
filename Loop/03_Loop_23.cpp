#include <iostream>
#include <string>

using namespace std;

int main() {
    string input, output;
    int k;
    cin >> input >> k;

    char currentChar = input[0];
    int count = 0;

    for (char c : input) {
        if (c == currentChar) {
            count++;
        } else {
            if (count < k) {
                output.append(count, currentChar);
            }
            currentChar = c;
            count = 1;
        }
    }

    if (count < k) {
        output.append(count, currentChar);
    }

    cout << output << endl;
}