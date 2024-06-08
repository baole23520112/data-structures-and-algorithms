#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using ll = long long;
const int MOD = 1e9 + 7;


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    long long a[n];
    for (ll &x : a) cin >> x;
    ll sum = 0;
    for (ll x : a){
        sum += x;
        sum %= MOD;
    }
    cout << sum % MOD;
    return 0;
}