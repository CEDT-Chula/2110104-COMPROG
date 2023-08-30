#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> cards(n);

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    cin.ignore();

    string actions;
    getline(cin, actions);

    for (char action : actions) {
        if (action == 'C') {
            int half = n / 2;
            vector<string> temp(cards.begin() + half, cards.end());
            temp.insert(temp.end(), cards.begin(), cards.begin() + half);
            cards = temp;
        }
        else if (action == 'S')
        {
            vector<string> temp;
            int half = n / 2;
            for (int j = 0; j < half; j++) {
                temp.push_back(cards[j]);
                temp.push_back(cards[j + half]);
            }
            cards = temp;
        }
    }

    for (string card : cards) {
            cout << card << " ";
    }

    return 0;
}