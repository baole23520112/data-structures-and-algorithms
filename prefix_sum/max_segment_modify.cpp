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
    int d[n + 5] = {0};
    while(q--){
        int l, r; cin >> l >> r;
        l--; r--; // do l r bắt đầu từ 1 so với mảng bắt đầu từ 0
        d[l] += 1;
        d[r + 1] -= 1;
    }
    for (int i = 1; i < n; i++){
        d[i] += d[i - 1];
    }
    sort(d, d + n, greater<int>());
    sort(a, a + n, greater<int>());
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (d[i] != 0){
            sum += (d[i] * a[i]);
        }
    }
    cout << sum;
    return 0;
}