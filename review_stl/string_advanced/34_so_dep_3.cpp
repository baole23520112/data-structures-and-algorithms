#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool tang(string s){
    for (int i = 1; i < s.size(); i++){
        if (s[i] - s[i - 1] < 0) return false;
    }
    return true;
}

bool giam(string s){
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] - s[i + 1] < 0) return false;
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
    string s; cin >> s;
    if (tang(s) || giam(s))
        cout << "YES";
    else cout << "NO";
    return 0;
}