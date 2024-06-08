#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
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
    int count = 0, count1 = 0;
    for (int x : a) if (x) count1++;
    for (int i = 0; i < k; i++){
        if (a[i]){
            count++;
        }
    }
    int res = count;
    for (int i = k; i < n; i++){
        if (a[i - k]) count--;
        if (a[i]) count++;
        res = max(res, count);
    }
    int ans = (count1 - res) - (k - res);
    if (ans >= 0) cout << k - res;
    else cout << -1;
    return 0;
}