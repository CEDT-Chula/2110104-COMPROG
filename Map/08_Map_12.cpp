#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    string input, name, tel;
    map <string, string> mem;
    cin.ignore();
    for(int i = 0; i < n; ++i){
        getline(cin, input);
        int num = input.rfind(' ');
        name = input.substr(0, num);
        tel = input.substr(num + 1);
        mem[name] = tel;
        mem[tel] = name;
    }
    cin >> m;cin.ignore();
    for(int i = 0; i < m; ++i){
        getline(cin, tel);
        cout << tel << " --> ";
        if(mem.find(tel) != mem.end())
            cout << mem[tel] << endl;
        else if(mem.find(tel) != mem.end())
            cout << mem[tel] << endl;
        else
            cout << "Not found" << endl;
    }

    return (0);
}
