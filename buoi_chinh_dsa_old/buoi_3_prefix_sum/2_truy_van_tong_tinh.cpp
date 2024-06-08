#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// truy van tong tu l -> r: a[r] - a[l - 1]

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q; cin >> n >> q;
    ll a[n];
    for (ll &x : a) cin >> x;
    for (int i = 1; i < n; i++){
        a[i] += a[i - 1];
    }
    while(q--){
        int l, r; cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
    return 0;
}