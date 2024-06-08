#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool tn(string s){
    for (int i = 0; i < s.size() / 2; i++){
        if (s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}

bool check6(string s){
    for (char x : s){
        if (x == '6')
            return true;
    }
    return false;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    if (tn(s) && check6(s)) cout << "YES";
    else cout << "NO";
    return 0;
}