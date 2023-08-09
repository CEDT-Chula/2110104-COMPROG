#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool checkPass(char g1, char g2, char g3) {
    if (g1 != 'A') {
        return false;
    }

    if (g2 == 'D' || g3 == 'D' || g2 == 'F' || g3 == 'F') {
        return false;
    }
    else
    {
        return true;
    }
}

int main() {
    char g1_1, g1_2, g1_3, g2_1, g2_2, g2_3;
    double gpa1, gpa2;
    string id1, id2;

    cin >> id1 >> gpa1 >> g1_1 >> g1_2 >> g1_3;
    cin >> id2 >> gpa2 >> g2_1 >> g2_2 >> g2_3;

    if (checkPass(g1_1, g1_2, g1_3) && checkPass(g2_1, g2_2, g2_3)) {
        // If Both is passed check another condition
        if (gpa1 > gpa2) {
            cout << id1 << endl;
        } else if (gpa1 < gpa2) {
            cout << id2 << endl;
        } else {
            //Both has same gpa. Check another condition
            if (g1_2 < g2_2) {
                cout << id1 << endl;
            } else if (g1_2 > g2_2) {
                cout << id2 << endl;
            } else {
                //Both has same gpa and grade. Check another condition
                if (g1_3 < g2_3) {
                    cout << id1 << endl;
                } else if (g1_3 > g2_3) {
                    cout << id2 << endl;
                } else {
                    cout << "Both" << endl;
                }
            }
        }
    } else if (checkPass(g1_1, g1_2, g1_3) && !checkPass(g2_1, g2_2, g2_3)) {
        cout << id1 << endl;
    } else if (!checkPass(g1_1, g1_2, g1_3) && checkPass(g2_1, g2_2, g2_3)) {
        cout << id2 << endl;
    } else {
        cout << "None" << endl;
    }
}