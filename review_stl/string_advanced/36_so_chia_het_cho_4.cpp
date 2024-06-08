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
    int ktr;
    if (s.size() < 2) ktr = s[0] - '0';
    else {
        ktr = (s[s.size() - 2] - '0') * 10 + (s[s.size() - 1] - '0');
    }
    if (ktr % 4 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}