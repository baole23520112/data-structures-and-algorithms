#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

bool check(int a, int b, int n, ll canh){
    return (canh / b) * (canh / a) >= n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, n; cin >> a >> b >> n;
    int temp = max(a, b);
    ll l = temp, r = 1ll * n * temp;
    ll ans = - 1;
    while(l <= r){
        ll m = (r + l) / 2;
        if (check(a, b, n, m)){
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