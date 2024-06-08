#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s){
    if (s.size() != 10 && s.size() != 11) return false;
    if (s[0] != '0') return false;
    for (int i = 1; i < s.size(); i++){
        if (!isdigit(s[i]))
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
    int n; cin >> n;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        if (check(s))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}