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
    string s; cin >> s;
    s += '@';
    vector<pair<char, int>> v;
    int count = 1;
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i - 1]){
            count++;
        }
        else {
            v.push_back({s[i - 1], count});
            count = 1;
        }
    }
    for (auto x : v){
        cout << x.first << x.second;
    }
    return 0;
}