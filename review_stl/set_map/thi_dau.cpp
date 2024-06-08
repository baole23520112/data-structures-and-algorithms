#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    cin.ignore(1);
    map<string, vector<string>> a;
    for (int i = 0; i < n; i++){
        string team1, team2;
        string match;
        getline(cin, match);
        int pos = match.find(" - ");
        team1 = match.substr(0, pos);
        team2 = match.substr(pos + 3);
        a[team1].push_back(team2);
        a[team2].push_back(team1);
    }
    for (auto &x : a){
        sort(x.second.begin(), x.second.end());
    }
    for (auto &x : a){ // phai truyen tham chieu
        cout << x.first << " : ";
        bool check = true;
        for (auto y : x.second){
            if (check == false){
                cout << ", " << y;
            }
            else {
                cout << y;
                check = false;
            }
        }
        cout << endl;
    }
    return 0;
}