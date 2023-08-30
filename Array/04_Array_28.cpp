#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    map<char, int> occurrences;

    for (int i = 0; i < input.length(); i++) {
        input[i] = tolower(input[i]);
    }

    for (char c : input)
    {
        if (isalpha(c)) {
            occurrences[c]++;
        }
    }

    for (auto pair : occurrences) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}