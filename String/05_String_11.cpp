#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    while (getline(cin, input)) {
        int prevpos = 0;
        int currentpos = 0;
        char signal = input[input.length() - 1];

        string resultString = "";

        int countSignal = 0;

        for (int i = 0; i < input.length(); i++) {
            if (input[i] == signal) {
                countSignal++;
                if (countSignal % 2 == 0) {
                    resultString += input.substr(prevpos + 1, i - prevpos - 1);
                }
                else
                {
                    prevpos = i;
                }
            }
        }

        cout << resultString << endl;
    }
}