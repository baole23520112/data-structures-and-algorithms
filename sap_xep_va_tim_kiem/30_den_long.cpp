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
    int n, l; cin >> n >> l;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    double max1 = 0;
    for (int i = 0; i < n; i++){
        if (i == 0) max1 = 1.0 * a[i];
        else if (i == n - 1) max1 = max({(1.0 * l - a[i]), max1, (1.0 * a[i] - a[i - 1]) / 2});
        else max1 = max(max1, (1.0 * a[i] - a[i - 1]) / 2);
    }
    cout << fixed << setprecision(10) << max1;
    return 0;
}