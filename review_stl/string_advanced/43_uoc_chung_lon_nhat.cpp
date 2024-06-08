#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll chiadu(string s, ll m){
    ll r = 0;
    for (int i = 0; i < s.size(); i++){
        r = r * 10 + (s[i] - '0');
        r %= m;
    }
    return r;
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
    ll m; cin >> m;
    ll b = chiadu(s, m);
    ll a = m;
    while(b){
        ll temp = a % b;
        a = b;
        b = temp;
    }
    cout << a;
    return 0;
}