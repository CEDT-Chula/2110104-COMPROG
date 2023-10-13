#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b){
    return a.second > b.second;
}

int main()
{
    int n, m = 0;
    string a, s, type, time;
    map<string, int> typeToTimeMap;
    while(cin >> a >> s >> type >> time){
        n = time.find(':');
        if(typeToTimeMap.find(type) == typeToTimeMap.end())
            typeToTimeMap[type] = stoi(time.substr(0, n)) * 60 + stoi(time.substr(n + 1));
        else typeToTimeMap[type] += stoi(time.substr(0, n)) * 60 + stoi(time.substr(n + 1));
    }

    vector<pair<string, int> > sorted_mp(typeToTimeMap.begin(), typeToTimeMap.end());
    sort(sorted_mp.begin(), sorted_mp.end(), cmp);
    int count = 0;
    for(auto &entry : sorted_mp) {
        if(count >= 3) break;
        cout << entry.first << " --> " << entry.second / 60 << ':' << entry.second % 60 << '\n';
        count++;
    }
    return (0);
}