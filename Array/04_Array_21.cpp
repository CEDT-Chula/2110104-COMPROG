#include <iostream>
#include <iomanip>

using namespace std;

double continuedFraction (int coef[], int size) {
    if (size <= 0) {
        return 0.0;
    }

    double value = coef[size - 1];

    for (int i = size - 2; i >= 0; i--) {
        value = coef[i] + 1.0 / value;
    }

    return value;
}

int main() {
    int n;
    cin >> n;
    int coef[n];

    for (int i = 0; i < n; i++) {
        cin >> coef[i];
    }

    for (int i = 0; i < n; i++) {
        cout << setprecision(10) << continuedFraction(coef, i + 1) << endl;
    }

    return 0;
}