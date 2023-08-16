#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string solution, answer;
    int score = 0;

    getline(cin, solution);
    getline(cin, answer);

    if (solution.length() != answer.length()) {
        cout << "Incomplete answer" << endl;
        return 0;
    }

    for (int i = 0; i < solution.length(); i++) {
        if (solution[i] == answer[i]) {
            score++;
        }
    }

    cout << score << endl;
}