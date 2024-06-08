#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

bool check(int a[], int n, int t, ll time){
    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += time / a[i];
    }
    return sum >= t;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, t; cin >> n >> t;
    int a[n];
    for (int &x : a) cin >> x;
    ll l = 0, r = 1ll * (*min_element(a, a + n)) * t;
    ll ans = -1;
    while(l <= r){
        ll m = (r + l) / 2;
        if (check(a, n, t, m)){
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