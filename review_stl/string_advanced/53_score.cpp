#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool Isdigit(string s){
    for (char x : s){
        if (!isdigit(x)) return false;
    }
    return true;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    map<string, int> match;
    while(getline(cin, s)){
        stringstream ss(s);
        string temp;
        string team1 = "";
        while(ss >> temp){
            if (Isdigit(temp)) break; // gap so thi out ra
            team1 = team1 + temp + " "; // luu ten
        }
        team1.pop_back(); // xoa space cuoi cung
        match[team1] += stoi(temp); // convert temp to integer before adding
        ss >> temp; // cin "-"
        ss >> temp; // cin kq thu 2
        int score = stoi(temp);
        string team2 = "";
        while(ss >> temp){
            team2 = team2 + temp + " ";
        }
        team2.pop_back();
        match[team2] += score;
    }
    vector<pair<string, int>> temp;
    for (auto x : match){
        temp.push_back({x.first, x.second});
    }
    sort(temp.begin(), temp.end(), [](pair<string, int> a, pair<string, int> b)->bool{
        if (a.second != b.second)
            return a.second > b.second;
        return a.first < b.first;
    });
    for (auto x : temp){
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}