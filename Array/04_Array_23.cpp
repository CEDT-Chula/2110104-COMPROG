#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n, all_cost = 0;
    cin >> n;

    map<string, int> fees;

    for (int i = 0; i < n; i++) {
        string country;
        int cost;
        cin >> country >> cost;
        fees[country] = cost;
    }

    string path;
    cin.ignore();
    getline(cin, path);
    string prevPath = path.substr(4, 2);

    for (int i = 0; i < path.length(); i += 7) {
        string country = path.substr(i + 4, 2);
        if (prevPath != country) {
            all_cost += fees[country];
            prevPath = country;
        }
    }

    cout << all_cost << endl;
    return 0;
}