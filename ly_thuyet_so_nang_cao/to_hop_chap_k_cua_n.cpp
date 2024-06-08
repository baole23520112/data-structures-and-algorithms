#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

ll a[10000000];

ll powMod(ll a, ll b){
    ll res = 1;
    while(b){
        if (b & 1){
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}

ll inverse(ll a, ll m){
    return powMod(a, m - 2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll n, k; cin >> n >> k;
    // a[0] = 1;
    // for (ll i = 1; i <= n; i++){
    //     a[i] = a[i - 1] * i;
    //     a[i] %= mod;
    // }
    // cout << (a[n] % mod * inverse(a[k] * a[n - k] % mod, mod)) % mod;
    cout << inverse(6, mod) % mod;
    return 0;
}