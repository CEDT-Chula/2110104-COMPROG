#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cin >> x;
    double n = sqrt(log(pow((x + 1), 2)));
    double result = pow(x, n) / (10 - x);

    cout << round(result*1e6) / 1e6 << endl;
}