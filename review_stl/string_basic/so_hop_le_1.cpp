#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s){
    if (((s[0] - '0') % 2 == 0 && (s[s.size() - 1] - '0') % 2 != 0) || ((s[0] - '0') % 2 != 0 && (s[s.size() - 1] - '0') % 2 == 0)) return false;
    for (int i = 0; i < s.size() - 1; i++){
        if (isalpha(s[i])) return false;
        if (abs(s[i] - s[i + 1]) == 3) return false;
        if (s[i] == '2' && s[i + 1] == '8') return false; 
        if (s[i + 1] == '2' && s[i] == '8') return false; 
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
        if (s.size() == 1 || check(s))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}