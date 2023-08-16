#include <iostream>

using namespace std;

int factorization(int n, int k) {
    if (n == 1) {
        return 1;
    }

    while (n%k == 0) {
        cout << k;

        n /= k;
        if (n > 1) {
            cout << "*";
        }
    }

    factorization(n, k+1);
    return 0;
}

int main() {
    long long n;
    cin >> n;

    factorization(n, 2);
    cout << endl;
}