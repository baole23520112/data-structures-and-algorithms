#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

ll a[1000005];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; i++){
        a[i] = (2 * a[i - 1] % mod + 3 * a[i - 2] % mod) % mod;
    }
    cout << a[n];
    return 0;
}