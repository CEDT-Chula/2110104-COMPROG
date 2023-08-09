#include <iostream>
#include <string>

using namespace std;

string grading(double score) {
    if (score >= 80) {
        return "A";
    } else if (score >= 70) {
        return "B";
    } else if (score >= 60) {
        return "C";
    } else if (score >= 50) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    double score;
    cin >> score;

    cout << grading(score) << endl;
}