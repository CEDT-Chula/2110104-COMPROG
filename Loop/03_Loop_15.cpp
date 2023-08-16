#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string input,output;

    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        switch (input[i])
        {
        case '[':
            output += '(';
            break;
        case ']':
            output += ')';
            break;
        case '(':
            output += '[';
            break;
        case ')':
            output += ']';
            break;
        default:
            output += input[i];
            break;
        }
    }

    cout << output << endl;
}