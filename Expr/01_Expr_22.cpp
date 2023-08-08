#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double xe, ye, re, rp, xm, ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;

    double A = xm - xe;
    double B = ym - ye;
    double C = sqrt(pow(A, 2) + pow(B, 2));

    double c = re - rp;

    double trigRatio = c / C;
    double a = A * trigRatio;
    double b = B * trigRatio;

    double xp = xe + a;
    double yp = ye + b;

    cout << round(xp) << " " << round(yp) << endl;
}