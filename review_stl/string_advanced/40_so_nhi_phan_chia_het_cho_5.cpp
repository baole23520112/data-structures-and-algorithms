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
    ll res = 0, lt = 1;
    for (int i = s.size() - 1; i >= 0; i--){
        res += (s[i] - '0') * lt;
        lt *= 2;
        lt %= 5;
        res %= 5;
    }
    if (res == 0) cout << "YES";
    else cout << "NO";
    return 0;
}