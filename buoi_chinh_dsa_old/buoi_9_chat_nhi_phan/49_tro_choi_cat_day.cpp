#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

bool check(int a[], int n, int k, double leng){
    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i] / leng;
    }
    return sum >= k;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    double l = 0, r = 9e18;
    double ans = -1;
    for (int i = 0; i < 100; i++){
        double m = (r + l) / 2;
        if (check(a, n, k, m)){
            ans = m;
            l = m;
        }
        else {
            r = m;
        }
    }
    cout << fixed << setprecision(6) << ans;
    return 0;
}