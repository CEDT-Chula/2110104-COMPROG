#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int n;

    int min1 = numeric_limits<int>::max();
    int max1 = -numeric_limits<int>::max();
    int min2 = numeric_limits<int>::max();
    int max2 = -numeric_limits<int>::max();

    int ct = 0;
    int ct1 = 0;
    int ct2 = 1;
    int sw1 = 0;
    int sw2 = 3;

    while (cin >> n) {
        if (n == -999 || n == -998) {
            break;
        }

        if (ct == ct1) {
            min1 = min(min1, n);
            max1 = max(max1, n);

            if (sw1 == 3) {
                sw1 = 1;
            } else {
                sw1 = 3;
            }
            ct1 += sw1;
        }

        if (ct == ct2) {
            min2 = min(min2, n);
            max2 = max(max2, n);

            if (sw2 == 3) {
                sw2 = 1;
            } else {
                sw2 = 3;
            }
            ct2 += sw2;
        }

        ct++;
        }

    if (n == -998) {
        cout << min1 << " " << max2;
    } else {
        cout << min2 << " " << max1;
    }
}

