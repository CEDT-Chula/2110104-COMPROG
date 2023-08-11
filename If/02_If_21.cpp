#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Input Output
//32 32
//8456 8.5K
//84560 85K
//108283 108K
//2293910 2.3M
//12999995 13M
//580912391 581M
//1301008191 1.3B
//25555555555 26B
//2555555555555 2556B



int main() {
    double view;

    cin >> view;

    if (view < 1000) {
        cout << view << endl;
    } else if (view < 10000) {
        cout << round(view / 100) / 10.0 << "K" << endl;
    } else if (view < 100000) {
        cout << round(view /1000) << "K" << endl;
    } else if (view < 1000000) {
        cout << round(view /1000) << "K" << endl;
    } else if (view < 10000000) {
        cout << round(view /100000) / 10.0 << "M" << endl;
    } else if (view < 100000000) {
        cout << round(view /1000000) << "M" << endl;
    } else if (view < 1000000000) {
        cout << round(view /1000000) << "M" << endl;
    } else if (view < 10000000000) {
        cout << round(view /100000000) / 10.0 << "B" << endl;
    } else if (view < 100000000000) {
        cout << round(view /1000000000) << "B" << endl;
    } else if (view < 1000000000000) {
        cout << round(view /1000000000) << "B" << endl;
    } else if (view < 10000000000000) {
        cout << round(view /1000000000) << "B" << endl;
    }
}