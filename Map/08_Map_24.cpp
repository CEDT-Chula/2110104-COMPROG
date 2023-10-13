#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n, m;
    double price, totalsale = 0, mx = 0;
    string name;
    map <string, double> products;
    map <string, int> cnt;
    vector <string> mxproduct;
    cin >> n;
    for(int i = 0 ;i < n; ++i){
        cin >> name >> price;
        products[name] = price;
    }
    cin >> m;
    for(int i = 0; i < m ; ++i){
        cin >> name >> n;
        if(products.find(name) != products.end()){
            cnt[name] += n;
        }
    }
    for(auto it = cnt.begin(); it != cnt.end(); ++it){
        price = products.find(it->first)->second * it->second;
        totalsale += price;
        if(price > mx){
            mx = price;
            mxproduct.clear();
        }
        if(price == mx)
            mxproduct.push_back(it->first);
    }
    sort(mxproduct.begin(), mxproduct.end());
    if(mx == 0) cout << "No ice cream sales\n";
    else{
        cout << "Total ice cream sales: " << totalsale;
        cout << "\nTop sales: ";
        for(auto it = mxproduct.begin(); it != mxproduct.end(); ++it)
            cout << *it << " ";
    }
    return (0);
}

/*
5
Magnum 50
Cornetto 25
PaddlePop 15.50
AsianDelight 20
Calippo 15
3
Cookie 20
MamaTomYum 3
MangoSheet 10
*/