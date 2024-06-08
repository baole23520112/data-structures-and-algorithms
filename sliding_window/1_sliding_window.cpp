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
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    ll sum = 0;
    for (int i = 0; i < k; i++){
        sum += 1ll * a[i];
    }
    ll ans = sum;
    int pos = 0;
    for (int i = k; i < n; i++){
        sum += 1ll * a[i] - a[i - k];
        if (sum > ans){
            pos = i - k + 1;
            ans = sum;
        }
    }
    cout << ans << endl;
    for (int i = pos; i < pos + k; i++){
        cout << a[i] << ' ';
    }
    return 0;
}