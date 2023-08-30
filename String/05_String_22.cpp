#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    int countX = 0;

    int maxX = 0;
    int indexMaxX = 0;

    for (int i = 0; i < y.length(); i++) {
        countX = 0;
        
        for (int j = 0; j < x.length() && i + j < y.length(); j++) {
            if (x[j] == y[i + j]) {
                countX++;
            }
        }
        
        if (countX > maxX) {
            maxX = countX;
            indexMaxX = i;
        }
    }

    int countY = 0;
    int maxY = 0;
    int indexMaxY = 0;

    for (int i = 0; i < x.length(); i++) {
        countY = 0;
        
        for (int j = 0; j < y.length() && i + j < x.length(); j++) {
            if (y[j] == x[i + j]) {
                countY++;
            }
        }
        
        if (countY > maxY) {
            maxY = countY;
            indexMaxY = i;
        }
    }

    if (maxX > maxY) {
        for (int i = 0; i < indexMaxX; i++) {
            cout << '-';
        }
        cout << x << endl
             << y << endl
             << maxX;
    }
    else
    {
        cout << x << endl;
        for (int i = 0; i < indexMaxY; i++)
        {
            cout << '-';
        }
        cout << y << endl << maxY;
    }
}
