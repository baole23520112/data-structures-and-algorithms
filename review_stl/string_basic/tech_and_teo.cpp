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
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '2' || s[i] == '8' || s[i] == 't' || s[i] == 'e' || s[i] == 'c' || s[i] == 'h'){
            continue;
        }
        else 
            ans += s[i];
    }
    if (ans.size() == 0) 
        cout << "EMPTY";
    else 
        cout << ans;
    return 0;
}