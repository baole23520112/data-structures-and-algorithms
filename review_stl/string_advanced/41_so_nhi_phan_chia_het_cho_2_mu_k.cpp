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
    int k; cin >> k;
    int count = 0;
    for (int i = s.size() - 1; i >= 0; i--){
        if (s[i] == '0') count++;
        else break;
    }
    if (count >= k) cout << "YES";
    else cout << "NO";
    return 0;
}