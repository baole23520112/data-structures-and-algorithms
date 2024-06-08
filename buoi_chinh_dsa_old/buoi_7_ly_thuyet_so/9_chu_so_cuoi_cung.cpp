#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k; cin >> n >> m >> k;
    ll sum = 1;
    int mo = pow(10, k);
    for (int i = 0; i < m; i++){
        sum *= n;
        sum %= mo;
    }
    cout << sum % mo;
    return 0;
}