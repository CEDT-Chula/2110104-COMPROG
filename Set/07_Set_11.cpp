#include <iostream>
#include <set>
using namespace std;

int main() {
    string input1, input2;
    multiset<char> s1, s2;
    getline(cin, input1);
    getline(cin, input2);
    for(int i = 0; i < input1.size(); i++) {
        if(isalnum(input1[i]))
            s1.insert(tolower(input1[i]));
    }
    for(int i = 0; i < input2.size(); i++) {
        if(isalnum(input2[i]))
            s2.insert(tolower(input2[i]));
    }
    if(s1 == s2) 
        cout << "YES";
    else 
        cout << "NO";

}