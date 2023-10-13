#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <numeric>
using namespace std;

vector<float> scores;
vector<string> ID;

bool compareByScore(int i, int j) {
    return scores[i] > scores[j];
}

bool compareByID(int i, int j) {
    return ID[i] < ID[j];
}


int main(){
    int n_depart, n_student;
    cin >> n_depart;
    map<string, int> mp;
    for(int i = 0; i < n_depart; ++i) {
        string department;
        int vacancies;
        cin >> department >> vacancies;
        mp[department] = vacancies;
    }
    cin >> n_student;
    ID.resize(n_student);
    scores.resize(n_student);

    vector<vector<string> > order(n_student, vector<string>(4));
    vector<string> ans(n_student);

    for(int i = 0; i < n_student; ++i) {
        cin >> ID[i] >> scores[i];
        for(int j = 0; j < 4; ++j) {
            cin >> order[i][j];
        }
    }

    vector<int> indices(n_student);
    iota(indices.begin(), indices.end(), 0);
    sort(indices.begin(), indices.end(), compareByScore);
    for(int index : indices) {
        for(const auto& preferredDepartment : order[index]) {
            if(mp[preferredDepartment] > 0) {
                mp[preferredDepartment]--;
                ans[index] = preferredDepartment;
                break;
            }
        }
    }
    sort(indices.begin(), indices.end(), compareByID);
    for(int index : indices) {
        cout << ID[index] << " " << ans[index] << "\n";
    }

    return (0);
}