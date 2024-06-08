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
    int chan = 0, le = 0;
    for (int i = 0; i < s.size(); i++){
        if (i % 2 == 0) chan += (s[i] - '0');
        else le += (s[i] - '0');
    }
    if (abs(chan - le) % 11 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}