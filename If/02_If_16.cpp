#include <iostream>
#include <cmath>

using namespace std;

bool checkEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        cout << "positive" << endl;
    } else if (n < 0) {
        cout << "negative" << endl;
    } else {
        cout << "zero" << endl;
    }

    if (checkEven(n)) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}