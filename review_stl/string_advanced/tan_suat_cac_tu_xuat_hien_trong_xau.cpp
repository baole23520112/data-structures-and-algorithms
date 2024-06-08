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
    vector<pair<string, int>> a;
    string s;
    while(cin >> s){
        bool check = true;
        for (int i = 0; i < a.size(); i++){
            if (a[i].first == s){
                a[i].second++;
                check = false;
            }
        }
        if (check){
            a.push_back({s, 1});
        }
    }
    vector<pair<string, int>> b;
    for (auto x : a){
        b.push_back({x.first, x.second});
    }
    sort(b.begin(), b.end());
    for (auto x : b){
        cout << x.first << ' ' << x.second << endl;
    }
    cout << endl;
    for (auto x : a){
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}