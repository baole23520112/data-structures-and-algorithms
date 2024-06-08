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
    int ans;
    if (s.size() < 2) ans = s[0] - '0';
    else {
        ans = (s[s.size() - 2] - '0') * 10 + (s[s.size() - 1] - '0');
    }
    if (ans % 4 == 1) cout << 8;
    else if (ans % 4 == 2) cout << 4;
    else if (ans % 4 == 3) cout << 2;
    else cout << 6;
    return 0;
}