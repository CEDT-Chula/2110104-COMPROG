#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    int prevpos = 0;
    string resultString = "";

    for (int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) {
            if (i != 0) {
                resultString += input.substr(prevpos, i - prevpos) + ", ";
                prevpos = i;
            }
        } else if (isdigit(input[i])) {
            if (i == 0 || !isdigit(input[i - 1])) {
                if(i != 0) {
                    resultString += input.substr(prevpos, i - prevpos) + ", ";
                }
                prevpos = i;
            }
        } else {
            if (i > 0 && isdigit(input[i - 1])) {
                resultString += input.substr(prevpos, i - prevpos) + ", ";
                prevpos = i;
            }
        }
    }

    resultString += input.substr(prevpos);

    cout << resultString << endl;
    return 0;
}
