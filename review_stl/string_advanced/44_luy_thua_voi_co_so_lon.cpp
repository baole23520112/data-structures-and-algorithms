#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
using ll = long long;

ll chiadu(string s){
    ll r = 0;
    for (int i = 0; i < s.size(); i++){
        r = r * 10 + (s[i] - '0');
        r %= mod;
    }
    return r;
}

ll powMod(ll a, ll b, ll c){
    ll res = 1;
    while(b){
        if (b % 2 == 1){
            res = ((res % c) * (a % c)) % c; // ct dong du
        }
        // a = a * a = a^2,3,4,5;
        a = ((a % c) * (a % c)) % c; // ct dong du
        b /= 2;
    }
    return res;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string n; cin >> n;
    ll m; cin >> m;
    ll res = chiadu(n);
    cout << powMod(res, m, mod);
    return 0;
}