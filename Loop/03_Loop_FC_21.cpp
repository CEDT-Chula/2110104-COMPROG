#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float p;
    float k = 1, t = 1;

    cin >> p;

    while (true) {
        t = t * (365 - (k-1)) / 365;
        if (1 - t >= p) {
            break;
        }
        k++;
    }

    cout << k << endl;
}