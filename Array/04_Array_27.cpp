#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> line1;
    vector<int> line2;
    for (int i = 0; i < (2 * n); i++)
    {
        cin >> line1[i];
        cin >> line2[i];
    }

    int min1 = line1[0];
    int max1 = line1[0];
    int min2 = line2[0];
    int max2 = line2[0];

    for (int i = 0; i < (2 * n); i++) {
        if (i % 2 == 0) {
            min1 = min(min1, line1[i]);
            max1 = max(max1, line1[i]);
            min2 = min(min2, line2[i]);
            max2 = max(max2, line2[i]);
        } else {
            min1 = min(min1, line2[i]);
            max1 = max(max1, line2[i]);
            min2 = min(min2, line1[i]);
            max2 = max(max2, line1[i]);
        }
    }

    cin.ignore();
    string zigzag;
    getline(cin, zigzag);

    if (zigzag == "Zig-Zag") {
        cout << min1 << " " << max2;
    } else {
        cout << min2 << " " << max1;
    }

    return 0;
}