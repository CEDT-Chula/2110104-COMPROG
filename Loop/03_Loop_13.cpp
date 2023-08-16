#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool checkIfAlphabet(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
    string input,word;
    cin >> word;
    getline(cin, input);
    getline(cin, input);

    int counterWord = 0;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == word[0]) {
            if (!checkIfAlphabet(input[i - 1])) {
                bool isWord = true;
                for (int j = 0; j < word.length(); j++) {
                    if (input[i + j] != word[j]) {
                        isWord = false;
                        break;
                    }
                }
                if (isWord) {
                    if (!checkIfAlphabet(input[i + word.length()])) {
                        counterWord++;
                    }
                }
            }
            
            
        }
    }

    cout << counterWord << endl;
}