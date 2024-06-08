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
    ll r = 0;
    ll m; cin >> m;
    for (int i = 0; i < s.size(); i++){
        r = r * 10 + (s[i] - '0');
        r %= m;
    }
    cout << r;
    return 0;
}