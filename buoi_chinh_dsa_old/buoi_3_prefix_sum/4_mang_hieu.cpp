#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// mang hieu thoa man: d[i] = a[i] - a[i - 1]

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int d[n];
    d[0] = a[0];
    for (int i = 1; i < n; i++){
        d[i] = a[i] - a[i - 1];
    }
    for (int x : d) cout << x << ' ';
    return 0;
}