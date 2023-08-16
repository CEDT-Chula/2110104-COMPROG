#include <iostream>
#include <cmath>

using namespace std;

bool checkClose(double a, double x) {
    return abs(a - pow(10, x)) < pow(10, -10) * max(a, pow(10,x));
}

int main() {
    double a;

    cin >> a;

    double L = 0.0;
    double U = a;

    double x = (L + U) / 2;

    while (!checkClose(a, x)) {
        if (pow(10,x) > a) {
            U = x;
        } else {
            L = x;
        }
        x = (L + U) / 2;
    }

    cout << x << endl;
}