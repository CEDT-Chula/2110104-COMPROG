#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (c > d) {
        int temp = c;
        c = d;
        d = temp;
    }

    if (a > c) {
        int temp = b;
        b = d;
        d = temp;

        c = a;
    }

    a = e;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (c > a) {
        int temp = b;
        b = d;
        d = temp;

        a = c;
    }

    if (a > d) {
        cout << d << endl;
    } else {
        cout << a << endl;
    }
}