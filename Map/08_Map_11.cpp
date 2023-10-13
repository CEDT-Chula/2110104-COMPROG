#include <bits/stdc++.h>
using namespace std;
int n,m;

int main()
{
    cin >> n;
    string name, nick;
    map <string, string> map1, map2;
    for(int i = 0; i < n; ++i){
        cin >> name >> nick;
        map1[name] = nick;
        map2[nick] = name;
    }
    cin >> m;
    for(int i = 0; i < m; ++i){
        cin >> nick;
        if(map1.find(nick) != map1.end())
            cout << map1[nick] << endl;
        else if(map2.find(nick) != map2.end())
            cout << map2[nick] << endl;
        else
            cout << "Not found" << endl;
    }
    return (0);
}
/*
10
Robert Dick
William Bill
James Jim
John Jack
Margaret Peggy
Edward Ed
Sarah Sally
Andrew Andy
Anthony Tony
Deborah Debbie
4
John
Jim
Don
Debbie
*/