#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> splitString(string sentence) {
    int prevpos = 0;
    vector<string> result;
    for (int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == ' ') {
            result.push_back(sentence.substr(prevpos, i - prevpos));
            prevpos = i + 1;
        }
    }

    if (prevpos < sentence.length()) {
        result.push_back(sentence.substr(prevpos));
    }

    return result;
}

int findVowelPosition(const string& word) {
    string vowels = "aeiou";
    for (int i = 0; i < word.size(); i++) {
        if (vowels.find(word[i]) != string::npos) {
            return i;
        }
    }
    return -1;
}

void swapSubstringsAfterVowel(string& firstWord, int firstVowelPos, string& lastWord, int lastVowelPos) {
    string firstSub = firstWord.substr(firstVowelPos);
    string lastSub = lastWord.substr(lastVowelPos);

    firstWord = firstWord.substr(0, firstVowelPos) + lastSub;
    lastWord = lastWord.substr(0, lastVowelPos) + firstSub;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> result = splitString(input);

    string& firstWord = result[0];
    string& lastWord = result[result.size() - 1];

    int firstVowelPos = findVowelPosition(firstWord);
    int lastVowelPos = findVowelPosition(lastWord);

    if (firstVowelPos != -1 && lastVowelPos != -1) {
        swapSubstringsAfterVowel(firstWord, firstVowelPos, lastWord, lastVowelPos);
    }

    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
