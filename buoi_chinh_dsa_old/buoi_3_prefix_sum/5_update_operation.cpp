#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// tinh mang tong cua mang hieu -> mang ban dau
// -> tinh mang hieu cua de bai -> update -> tinh mang tong
// update = d[l]++, d[r + 1]--

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, t; cin >> n >> t;
    int a[n];
    for (int &x : a) cin >> x;
    int d[n + 1];
    d[0] = a[0];
    for (int i = 1; i < n; i++){
        d[i] = a[i] - a[i - 1];
    }
    while(t--){
        int l, r, k; cin >> l >> r >> k;
        d[l] += k;
        d[r + 1] -= k;
    }
    for (int i = 1; i < n; i++){
        d[i] += d[i - 1];
    }
    for (int i = 0; i < n; i++) cout << d[i] << ' ';
    return 0;
}