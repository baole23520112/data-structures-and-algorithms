#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] != s[s.size() - 1 - i])
            return false;
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
    set<string> a;
    while(cin >> s){
        if (check(s))
            a.insert(s);
    }
    for (auto x : a){
        cout << x << ' ';
    }
    return 0;
}