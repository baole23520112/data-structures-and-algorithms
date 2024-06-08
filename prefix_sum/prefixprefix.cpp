#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll a[100005], d[100005], d2[100005];
pair<pair<int, int>, ll> save[100005];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k; cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    
    for (int i = 1; i <= m; i++){
        cin >> save[i].first.first >> save[i].first.second >> save[i].second;
    }
    while(k--){
        int l, r; cin >> l >> r;
        d2[l]++;
        d2[r + 1]--;
    }
    for (int i = 1; i <= m; i++){
        d2[i] += d2[i - 1];
    }
    for (int i = 1; i <= n; i++){
        d[i] = a[i] - a[i - 1];
    }
    for (int i = 1; i <= m; i++){
        d[save[i].first.first] += d2[i] * save[i].second;
        d[save[i].first.second + 1] -= d2[i] * save[i].second;
    }
    for (int i = 1; i <= n; i++){
        d[i] += d[i - 1];
        cout << d[i] << ' ';
    }
    return 0;
}