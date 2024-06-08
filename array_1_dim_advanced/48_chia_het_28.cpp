#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[27] = {0};
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[x % 28]++;
    }
    ll cnt14 = 1ll * a[14] * (a[14] - 1) / 2;
    ll cnt0 = 1ll * a[0] * (a[0] - 1) / 2;
    ll sum = 0;
    for (int i = 1; i <= 13; i++){
        sum += 1ll * a[i] * a[28 - i];
    }
    cout << sum + cnt14 + cnt0;
    return 0;
}