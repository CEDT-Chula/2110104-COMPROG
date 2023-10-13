#include <iostream>
#include <map>
#include <set>
#include <string>
#include <queue>
using namespace std;

void findAnswer(map <string, set<string> > &mp, string start, set<string>& ans){
    queue<pair<string, int> > q;
    q.push({start, 0});

    while(!q.empty()) {
        auto [s1, depth] = q.front();
        q.pop();
        if(depth > 1) continue;

        for(const auto& it : mp.at(s1)) {
            if(ans.find(it) == ans.end()) {
                ans.insert(it);
                q.push({it, depth + 1});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    string s1, s2;
    map <string, set<string> > mp;
    while(getline(cin, s1)){
        n = s1.find(' ');
        if(n == -1) break;
        s2 = s1.substr(n + 1);
        s1.resize(n);
        mp[s1].insert(s2);
        mp[s2].insert(s1);
    }
    set <string> ans;
    ans.insert(s1);
    findAnswer(mp, s1, ans);
    for(auto it : ans)
        cout << it << endl;
        
    return (0);
}

/*
Siam ChitLom
ChitLom PhloenChit
PhloenChit Nana
Siam NationalStadium
Ratchadamri Siam
Siam PhayaThai
Ratchadamri SalaDaeng
ThongLo Ekkamai
Ekkamai ThongLo
ThongLo
*/