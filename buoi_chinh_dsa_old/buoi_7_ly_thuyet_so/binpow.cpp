#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007

ll binpow(ll a, ll b){
    if (!b){
        return 1;
    }
    ll X = binpow(a, b / 2);
    if (b & 1){
        return ((X % mod) * (X % mod) % mod) * (a % mod) % mod;
    }
    else {
        return (X % mod) * (X % mod) % mod;
    }
}

ll binpow2(ll a, ll b){
    ll res = 1;
    while (b) {
        if (b & 1){
            res = ((res % mod) * (a % mod)) % mod;
        }
        a = ((a % mod) * (a % mod)) % mod;
        b /= 2;
    }
    return res % mod;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a, b; cin >> a >> b;
    cout << binpow2(a, b) << '\n';
    return 0;
}