#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double y;
    int counter = 0;
    double total = 0;

    while(cin >> y) {
        if (y == -1) {
            break;
        }
        counter++;
        total += y;
    }

    if (counter == 0) {
        cout << "No Data" << endl;
    } else {
        cout << round((total / counter) * 100) / 100 << endl;
    }


}