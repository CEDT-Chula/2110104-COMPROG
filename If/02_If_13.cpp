#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d;

    cin >> a >> b >> c >> d;

    double max = 0;
    double min = 1000000;

    //find max from 4 variables without max and min function
    if (a > max) max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    //find min from 4 variables without max and min function
    if (a < min) min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;


    // calculate avg from 2 variables that is not max or min
    double avg = (a + b + c + d - max - min) / 2;

    cout << round(avg*100.0) / 100.0 << endl;

}