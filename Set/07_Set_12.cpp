#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, cnt = 0;
    set<int> s;
    while(cin >> n){
        cnt++;
        if(s.find(n) != s.end()){
            cout << cnt << '\n';
            return (0);
        }
        s.insert(n);
    }
    cout << -1;
    return (0);
}