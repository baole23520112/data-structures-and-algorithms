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
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(b, b + m);
    for (int i = 0; i < n; i++){
        auto pos = lower_bound(b, b + m, a[i]);
        cout << b + m - pos << ' ';
    }
    return 0;
}