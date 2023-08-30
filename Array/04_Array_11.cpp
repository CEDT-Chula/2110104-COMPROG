#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> findMissingNumber(string input) {
    bool hasNumber[10] = {false};
    vector<int> missing;

    for (char c : input) {
        if (c >= '0' && c <= '9') {
            hasNumber[c - '0'] = true;
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (!hasNumber[i]) {
            missing.push_back(i);
        }
    }

    return missing;
}

int main() {
    string input;
    vector<int> output;

    cin >> input;

    output = findMissingNumber(input);

    if (output.empty()) {
        cout << "None";
        return 0;
    }

    for (int i = 0; i < output.size(); ++i) {
        cout << output[i];
        if (i != output.size() - 1) {
            cout << ",";
        }
    }

    return 0;
}
