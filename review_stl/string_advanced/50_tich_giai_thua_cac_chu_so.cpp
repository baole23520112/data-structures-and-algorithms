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
        if (s[i] == '1' || s[i] == '0') continue;
        if (s[i] == '4') ans += "322";
        else if (s[i] == '6') ans += "53";
        else if (s[i] == '8') ans += "7222";
        else if (s[i] == '9') ans += "7332";
        else ans += s[i];
    }
    sort(ans.begin(), ans.end(), greater<int>()); // sort string
    cout << ans;
    return 0;
}