#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void flip(vector<int>& pancake, int position) {
    reverse(pancake.begin(), pancake.begin() + position + 1);
}

void printPancake(vector<int>& pancake) {
    for (int piece: pancake) {
        cout << piece << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> pancake(n);

    for (int i = 0; i < n; i++) {
        cin >> pancake[i];
    }

    // flip this shit
    printPancake(pancake);

    for (int i = pancake.size() - 1; i > 0; i--) {
        int maxIndex = max_element(pancake.begin(), pancake.begin() + i + 1) - pancake.begin();

        if (maxIndex != i) {
            // max is not at the top
            if (maxIndex != 0) {
                flip(pancake, maxIndex);
                printPancake(pancake);
            }

            // max is top now
            flip(pancake, i);
            printPancake(pancake);
        }
    }

    return 0;
}