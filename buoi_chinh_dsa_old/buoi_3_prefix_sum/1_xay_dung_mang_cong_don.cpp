#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// mang cong don thoa man dk: b[i] = a[i] + a[i - 1]

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
    for (int i = 1; i < n; i++){
        a[i] += a[i - 1];
    }
    for (int x : a) cout << x << ' ';
    return 0;
}