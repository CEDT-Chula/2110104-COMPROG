#include <bits/stdc++.h>
using namespace std;

map <string, string> T2K = {
    {"a", "2"}, {"b", "22"}, {"c", "222"},
    {"d", "3"}, {"e", "33"}, {"f", "333"},
    {"g", "4"}, {"h", "44"}, {"i", "444"},
    {"j", "5"}, {"k", "55"}, {"l", "555"},
    {"m", "6"}, {"n", "66"}, {"o", "666"},
    {"p", "7"}, {"q", "77"}, {"r", "777"}, {"s", "7777"},
    {"t", "8"}, {"u", "88"}, {"v", "888"},
    {"w", "9"}, {"x", "99"}, {"y", "999"}, {"z", "9999"},
    {" ", "0"}};

map <string, string> K2T = {
    {"2", "a"}, {"22", "b"}, {"222", "c"},
    {"3", "d"}, {"33", "e"}, {"333", "f"},
    {"4", "g"}, {"44", "h"}, {"444", "i"},
    {"5", "j"}, {"55", "k"}, {"555", "l"},
    {"6", "m"}, {"66", "n"}, {"666", "o"},
    {"7", "p"}, {"77", "q"}, {"777", "r"}, {"7777", "s"},
    {"8", "t"}, {"88", "u"}, {"888", "v"},
    {"9", "w"}, {"99", "x"}, {"999", "y"}, {"9999", "z"},
    {"0", " "}};

int main(){
    int n;
    string mode, str;
    while(getline(cin, str)){
        mode = str.substr(0, 3);
        str = str.substr(4);
        cout << ">> ";
        if(mode == "T2K"){
            for(auto ch : str){
                if(isupper(ch))ch += 32;
                string s;
                s += ch;
                cout << T2K[s] << ' ';
            }
        }
        else if(mode == "K2T"){
            str += ' ';
            for(int i = 0, j = 0; i < str.size(); ++i){
                if(str[i] == ' '){
                    cout << K2T[str.substr(j, i - j)];
                    j = i + 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}