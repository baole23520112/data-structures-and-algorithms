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
    int n, m, k; cin >> n >> m >> k;
    ll  a[n + 2], d[m + 2] = {0}, d2[n + 2] = {0};
    pair<pair<ll, ll>, ll> q[m + 2];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++){
        ll l, r, d; cin >> l >> r >> d;
        q[i].first.first = l;
        q[i].first.second = r;
        q[i].second = d;
    }
    while(k--){
        ll l, r; cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    // build diff 
    for (int i = 1; i <= n; i++){
        d2[i] = a[i] - a[i - 1];
    }
    for (int i = 1; i <= m; i++){
        d[i] += d[i - 1];
        d2[q[i].first.first] += d[i] * q[i].second;
        d2[q[i].first.second + 1] -= d[i] * q[i].second;
    }
    // build prefix
    for (int i = 1; i <= n; i++){
        d2[i] += d2[i - 1];
        cout << d2[i] << ' ';
    }
    return 0;
}