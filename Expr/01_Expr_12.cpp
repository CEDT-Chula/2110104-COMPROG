#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

double mosteller(double w, double h) {
    return sqrt(w * h) / 60;
}

double haycock(double w, double h) {
    return 0.024265 * pow(w, 0.5378) * pow(h, 0.3964);
}

double boyd(double w, double h) {
    return 0.0333 * pow(w, 0.6157 - 0.0188 * log10(w)) * pow(h, 0.3);
}

void print_result(double result) {
    cout << setprecision(15) << result << endl;
}

int main() {
    double w, h;
    cin >> w >> h;

    print_result(mosteller(w, h));
    print_result(haycock(w, h));
    print_result(boyd(w, h));
}
