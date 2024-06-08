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
    int n, t; cin >> n >> t;
    int a[n];
    for (int &x : a) cin >> x;
    int d[n + 1] = {0};
    while(t--){
        int l, r; cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    for (int i = 1; i < n; i++){
        d[i] += d[i - 1];
    }
    ll sum = 0;
    sort(d, d + n, greater<int>());
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++){
        sum += 1ll * d[i] * a[i];
    }
    cout << sum;
    return 0;
}