#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

ll cnt(int a[], int n, int h){
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (a[i] - h > 0){
            sum += a[i] - h;
        }
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, wood; cin >> n >> wood;
    int a[n];
    for (int &x : a) cin >> x;
    int l = 0, r = *max_element(a, a + n);
    ll ans = 0;
    while(l <= r){
        int m = (r + l) / 2;
        if (cnt(a, n, m) >= wood){
            ans = m;
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    cout << ans;
    return 0;
}