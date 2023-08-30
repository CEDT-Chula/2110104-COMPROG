#include <iostream>
#include <string>

using namespace std;

string words[29] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven","eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred"
};

string tripleToWords(int num) {
    // words[28] = hundred
    // words[20] = twenty
    string result = "";

    // Find the hundreds
    if (num >= 100) {
        result += words[num / 100] + " " + words[28] + " ";
        num %= 100;
    }

    // Find the tens
    if (num >= 20) {
        result += words[20 + (num / 10) - 2] + " ";
        num %= 10;
    }

    // still in range 1 - 19
    if (num > 0) {
        result += words[num] + " ";
    }

    return result;
}

string numberToWords(long long num) {
    if (num == 0) return words[0];

    string result = "";
    string scales[] = {"", "thousand ", "million ", "billion ", "trillion "};

    int scaleIndex = 0;

    while (num > 0) {
        int lastThreeDigits = num % 1000;
        if (lastThreeDigits != 0) {
            result = tripleToWords(lastThreeDigits) + scales[scaleIndex] + result;
        }

        scaleIndex++;
        num /= 1000;
    }

    return result;
}

int main() {
    long long num;
    cin >> num;
    cout << numberToWords(num) << endl;
    return 0;
}
