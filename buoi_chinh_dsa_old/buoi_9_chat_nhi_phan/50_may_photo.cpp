#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

bool check(ll n, ll x, ll y, ll time){
    time -= min(x, y);
    return time / x + time / y >= n - 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, x, y; cin >> n >> x >> y;
    ll l = 0, r = min(x, y) * n;
    ll ans = -1;
    while(l <= r){
        ll m = (l + r) / 2;
        if (check(n, x, y, m)){
            ans = m;
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    cout << ans;
    return 0;
}