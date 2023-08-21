#include <iostream>
#include <string>
#include <limits>

using namespace std;

bool checkCorrectInput(string order) {
    if (order[0] != 'R')
        return false;

    for (int i = 0; i < order.length(); i += 2) {
        if (order[i] == 'R') {
            if (order[i+1] == 'R') {
                return false;
            }
        } else if (order[i] == 'Y') {
            // Check for pattern 'YGNBPK
            string pattern = "YGNBPK";
            int idx = 0; // Index for string pattern

            for (int j = i; j < order.length(); j++) {

                if (idx == pattern.length()) {
                    return false;
                }

                if (order[j] == pattern[idx]) {
                    idx++;
                } else {
                    return false;
                }
            }

            return true;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int calculateScore(string order) {
    int score = 0;

    for (int i = 0; i < order.length(); i++) {
        if (order[i] == 'R') {
            score += 1;
        } else if (order[i] == 'Y') {
            score += 2;
        } else if (order[i] == 'G') {
            score += 3;
        } else if (order[i] == 'N') {
            score += 4;
        } else if (order[i] == 'B') {
            score += 5;
        } else if (order[i] == 'P') {
            score += 6;
        } else if (order[i] == 'K') {
            score += 7;
        }
    }

    return score;
}

string strip(string order) {
    string stripped = "";

    for (int i = 0; i < order.length(); i++) {
        if (order[i] != ' ') {
            stripped += order[i];
        }
    }

    return stripped;
}

int main() {
    int n;

    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; i++) {
        string order;
        getline(cin, order);

        order = strip(order);

        if (checkCorrectInput(order)) {
            cout << calculateScore(order) << endl;
        } else {
            cout << "WRONG_INPUT" << endl;
        }
    }
}