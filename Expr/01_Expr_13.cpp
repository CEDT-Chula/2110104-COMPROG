#include <iostream>
#include <cmath>

using namespace std;

double quadratic1(double a, double b, double c) {
    return round(((-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a))*1e3) / 1e3;
}

double quadratic2(double a, double b, double c) {
    return round(((-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a))*1e3) / 1e3;
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    cout << quadratic1(a, b, c) << " " << quadratic2(a, b, c) << endl;
}