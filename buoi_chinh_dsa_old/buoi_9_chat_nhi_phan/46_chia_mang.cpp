#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

// chặt nhị phân dựa trên max sum của 1 mảng con -> ktr điều kiện so với k

bool check(int a[], ll n, ll k, ll sum){
    int dem = 0;
    ll tong = 0;
    for (int i = 0; i < n; i++){
        tong += a[i];
        if (tong > sum){
            dem++;
            tong = a[i];
        }
    }
    dem++;
    return dem <= k;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    ll l = *max_element(a, a + n), r = accumulate(a, a + n, 0ll);
    ll ans = -1;
    while(l <= r){
        ll m = (r + l) / 2;
        if (check(a, n, k, m)){
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