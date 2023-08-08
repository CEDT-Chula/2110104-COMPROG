#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

using namespace std;

int findFactorial(int facNum) {
    int factorial = 1;
    for (int i = 1; i <= facNum; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    cout << (M_PI - (findFactorial(10) / pow(8, 8)) + pow(log(9.7), (7 / sqrt(71) - sin(40 * M_PI / 180)))) / (pow(1.2, (cbrt(2.3))));
    return 0;
}