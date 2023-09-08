#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string win, lose;
    set <string> winner, loser;
    while(cin >> win >> lose){
        winner.insert(win);
        loser.insert(lose);
    }
    for(auto l : loser){
        if(winner.find(l) != winner.end())
            winner.erase(l);
    }
    for(auto w : winner)
        cout << w << ' ';
    if(winner.empty())cout  << "None";

    return (0);
}