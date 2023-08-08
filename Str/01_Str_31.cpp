#include <iostream>
#include <cmath>

using namespace std;

long gcd(long a, long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int A;
    string B, C;

    cin >> A >> B >> C;

    int x = B.length();
    int y = C.length();

    int intB = stoi(B);
    int intC = stoi(C);

    int base = pow(10, x);
    int repeat = pow(10,y) - 1;

    int numerator = A * base * repeat + intB * repeat + intC;
    int denominator = repeat * base;

    int gcdNum = gcd(numerator, denominator);

    numerator /= gcdNum;
    denominator /= gcdNum;

    cout << numerator << " / " << denominator << endl;

    return 0;

}