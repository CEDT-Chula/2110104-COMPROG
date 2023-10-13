#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    string co, prev;
    float price;
    map <string, float> rate;
    rate["THB"] = 1;
    for(int i = 0; i < n; ++i){
        cin >> co >> price;
        rate[co] = price;
    }
    cin >> m >> co;
    cout << m << ' ' << co;
    prev = co;
    while(cin >> co){
        cout << " -> ";
        m = (int)((m * rate[prev]) / rate[co]);
        prev = co;
        cout << m << ' ' << co;
    }

    return (0);
}