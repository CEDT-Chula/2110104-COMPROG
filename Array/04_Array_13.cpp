#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<int> stringToNumbers(string str) {
    vector<int> numbers;
    istringstream iss(str);

    int number;
    while (iss >> number) {
        numbers.push_back(number);
    }

    return numbers;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    string input;
    getline(cin, input);

    vector<int> data = stringToNumbers(input);

    int countPeak = 0;

    for (int i = 1; i < data.size() - 1; ++i)
    {
        if (data[i] > data[i - 1] && data[i] > data[i + 1])
        {
            ++countPeak;
        }
    }

    cout << countPeak << endl;
}