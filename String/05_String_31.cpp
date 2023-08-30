#include <iostream>
#include <string>
#include <vector>
using namespace std;

char decodeUL(string order) {
    string UL[12] = {
        "UUUU",
        "UUUL",
        "UULU",
        "UULL",
        "ULUU",
        "ULUL",
        "ULLU",
        "ULLL",
        "LUUU",
        "LUUL",
        "LULU",
        "LULL",
    };

    for (int i = 0; i < 13; i++) {
        if (UL[i] == order) {
            if (i == 10) {
                return '-';
            } else if (i == 11) {
                return ',';
            } else {
                return '0' + i;
            }
        }
    }
}

string encodeUL(char ch) {
    string UL[12] = {
        "UUUU",
        "UUUL",
        "UULU",
        "UULL",
        "ULUU",
        "ULUL",
        "ULLU",
        "ULLL",
        "LUUU",
        "LUUL",
        "LULU",
        "LULL",
    };

    if (ch >= '0' && ch <= '9') {
        return UL[ch - '0'];
    } else if (ch == '-') {
        return UL[10];
    } else if (ch == ',') {
        return UL[11];
    }
    return "";
}

void encode(string realSentence, string fakeText) {
    string encodedUL = "";

    for (int i = 0; i < realSentence.length(); i++) {
        encodedUL += encodeUL(realSentence[i]);
    }

    string encodedResult = "";
    int fakeTextIndex = 0;

    for (char ch : encodedUL) {
        if (fakeTextIndex == fakeText.length()) {
            fakeTextIndex = 0;
        }

        char currentChar = fakeText[fakeTextIndex];

        while (!isalpha(currentChar)) {
            encodedResult += currentChar;
            fakeTextIndex++;
            if (fakeTextIndex == fakeText.length()) {
                fakeTextIndex = 0;
            }
            currentChar = fakeText[fakeTextIndex];
        }

        if (ch == 'U') {
            encodedResult += toupper(currentChar);
        } else if (ch == 'L') {
            encodedResult += tolower(currentChar);
        }

        fakeTextIndex++;
    }

    cout << encodedResult << endl;
}

void decode(string sentence) {
    string ulSequence = "";

    for (int i = 0; i < sentence.length(); i++) {
        if (isalpha(sentence[i])) {
            if (isupper(sentence[i])) {
                ulSequence += "U";
            } else {
                ulSequence += "L";
            }
        }
    }

    for (int i = 0; i < ulSequence.length(); i+=4) {
        string sub = ulSequence.substr(i, 4);
        cout << decodeUL(sub);
    }

    cout << endl;
}

int main() {
    string fakeText;
    getline(cin, fakeText);

    char action;
    string input;

    while(cin >> action && getline(cin, input)) {
        if (action == 'E') {
            encode(input, fakeText);
            
        }
        else if (action == 'D')
        {
            decode(input);
            
        }
    }

    return 0;
}
