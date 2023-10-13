#include <bits/stdc++.h>
using namespace std;

int main(){
    string pet, type;
    int idx = 0;
    map<string, vector<string> > m;
    vector <string> order;
    while(cin >> pet >> type){
        m[type].push_back(pet);
        if(find(order.begin(), order.end(), type) == order.end()){
            order.push_back(type);
            idx++;
        }
    }

    for(int i = 0; i < idx; i++){
        map <string, vector<string> >::iterator it = m.find(order[i]);
        cout << it->first << ": ";
        for(int j = 0; j < it->second.size(); j++){
            cout << it->second[j] << " ";
        }
        cout << endl;
    }
    return (0);
}