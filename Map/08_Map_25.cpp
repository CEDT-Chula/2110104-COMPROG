#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> order;

bool compare(string &a, string &b){
    return find(order.begin(), order.end(), a) < find(order.begin(), order.end(), b);
}

int main(){
    int n;
    string id, input;
    map <string, vector<string> > key2member, member2key;
    vector <string> ans, Order;
    bool found = false;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> id;
        Order.push_back(id);
        while(cin >> input && input != "*"){
            key2member[input].push_back(id);
            member2key[id].push_back(input);
        }
    }
    cin >> id;
    for(string &it : member2key[id]){
        if(key2member[it].size() > 1){
            found = true;
            for(string &it2 : key2member[it]){
                if(it2 != id && (find(ans.begin(), ans.end(), it2) == ans.end()))
                    ans.push_back(it2);
            }
        }
    }
    if(!found) cout << ">> Not Found\n";
    else{
        sort(ans.begin(), ans.end(), compare);
        for(vector<string>::iterator it = ans.begin(); it != ans.end(); ++it)
            cout << ">> " << *it << endl;
    }
    return (0);
}
/*
6
51234621 A B D E F *
427613829 B D G H I *
38216542 Z B D J *
423212822 AA B1 C3 D *
4126548 J Z3 *
98871973331 Q M N *
4126548

>> 38216542
*/