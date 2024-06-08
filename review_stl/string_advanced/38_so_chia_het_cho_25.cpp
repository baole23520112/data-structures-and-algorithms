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
    int num = 0;
    if (s.size() == 1){
        num = s[0] - '0';
    }
    else {
        num = (s[s.size() - 2] - '0') * 10 + (s.back() - '0');
    }
    if (num % 25 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}