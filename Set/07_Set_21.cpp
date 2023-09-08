#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, k, ans = 0;
    cin >> k;
    set <int> s;
    while(cin >> n){
        if(n > k)continue;
        if(s.find(k - n) != s.end()){
            ans++;
            s.insert(n);
        }
    }
    cout << ans << endl;
    return (0);
}