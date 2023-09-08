#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    set <int> union_s, intersect_s, diff_s;
    string str;
    int n,m,pos = 0;

    getline(cin, str);
    while ((pos = str.find(" ")) != string::npos) {
        n = stoi(str.substr(0, pos));
        union_s.insert(n);
        intersect_s.insert(n);
        diff_s.insert(n);
        str.erase(0, pos + 1);
    }
    n = stoi(str.substr(0, pos));
    union_s.insert(n);
    intersect_s.insert(n);
    diff_s.insert(n);
    
    while(getline(cin, str)){
        set <int> intersect_s2;
        pos = 0;
        while ((pos = str.find(" ")) != string::npos) {
            n = stoi(str.substr(0, pos));
            union_s.insert(n);
            intersect_s2.insert(n);
            str.erase(0, pos + 1);
        }
        n = stoi(str.substr(0, pos));
        union_s.insert(n);
        intersect_s2.insert(n);
        //diff_s
        for (auto it = diff_s.begin(); it != diff_s.end();){
            if (intersect_s2.count(*it) > 0){
                it = diff_s.erase(it);
            } 
            else 
                ++it;
        }
        //intersect_s
        for (auto it = intersect_s.begin(); it != intersect_s.end();) {
            if (intersect_s2.count(*it) == 0) {
                it = intersect_s.erase(it);
            } else {
                ++it;
            }
        }
    }

    cout << "U: ";
    for(auto e : union_s)
        cout << e << ' ';
    if(union_s.empty())
        cout << "empty set";
    cout << "\nI: ";
    for(auto e : intersect_s)
        cout << e << ' ';
    if(intersect_s.empty())
        cout << "empty set";
    cout << "\nD: ";
    for(auto e : diff_s)
        cout << e << ' ';
    if(diff_s.empty())
        cout << "empty set";
    return (0);
}