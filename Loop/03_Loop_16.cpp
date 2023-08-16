#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    // print Triangle
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i < n - 1) {
            for (int j = 0; j < n-i-1; j++) {
                cout << ".";
            }
            cout << "*";
            for (int j = 0; j < i*2-1; j++) {
                cout << ".";
            }
            if (i != 0) {
                cout << "*";
            }
            cout << endl;
        }

        if (i == n-1) {
            for (int j = 0; j < n*2-1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}