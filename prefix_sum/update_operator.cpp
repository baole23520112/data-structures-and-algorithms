#include <bits/stdc++.h>
using namespace std;

using ll = long long;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q; cin >> n >> q;
    int a[n];
    for (int &x : a) cin >> x;
    int d[n + 5];
    d[0] = a[0];
    for (int i = 1; i < n; i++){
        d[i] = a[i] - a[i - 1];
    }
    while(q--){
        int l, r, k; cin >> l >> r >> k;
        d[l] += k;
        d[r + 1] -= k;
    }
    // khoi phuc lai mang cong don
    ll F[n];
    F[0] = d[0];
    for (int i = 1; i < n; i++){
        F[i] = F[i - 1] + d[i];
    }
    for (int x : F) cout << x << ' ';
    return 0;
}