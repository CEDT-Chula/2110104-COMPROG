#include <iostream>
#include <string>

using namespace std;

unsigned long long pow(int base, int exp) {
    unsigned long long result = 1;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}

int main() {
    unsigned long long int m, n;
    cin >> m >> n;

    // turn int to string to get length
    string m_str = to_string(m);
    string n_str = to_string(n);

    // get length of m and n
    int m_len = m_str.length();
    int n_len = n_str.length();

    // Total digits between m and n
    unsigned long long int digits = 0;

    if (m_len == n_len) {
        // If both numbers have the same length
        digits += (n - m + 1) * m_len;
    } else {
        // PART 1
        digits += (pow(10, m_len) - m) * m_len;

        // PART 2 (Between m and n)
        for (int i = m_len + 1; i < n_len; i++) {
            digits += 9 * pow(10, i - 1) * i;
        }

        // PART 3
        digits += (n - pow(10, n_len - 1) + 1) * n_len;
    }

    cout << digits << endl;
    return 0;
}
