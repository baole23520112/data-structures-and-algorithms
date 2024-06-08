#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool solve(){
    int n, k, t; cin >> n >> k >> t;
    int a[n];
    for (int &x : a) cin >> x;
    multiset<int> se;
    for (int j = 0; j < k; j++){
        auto it = se.lower_bound(a[j] - t);
        if (it != se.end() && *it <= a[j] + t)
            return true;
        se.insert(a[j]);
    }
    for (int i = k; i < n; i++){
        se.erase(se.find(a[i - k]));
        auto it = se.lower_bound(a[i] - t);
        if (it != se.end() && *it <= a[i] + t)
            return true;
        se.insert(a[i]);

    }
    return false;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        if (solve()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}