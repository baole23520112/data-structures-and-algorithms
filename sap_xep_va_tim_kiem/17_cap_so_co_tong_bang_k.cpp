#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int lastPos(int a[], int l, int r, int k){
    int pos = - 1;
    while(l <= r){
        int m = (r + l) / 2;
        if (a[m] == k){
            pos = m;
            l = m + 1;
        }
        else if (a[m] < k){
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return pos;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n - 1; i++){
        auto temp = lower_bound(a + i + 1, a + n, k - a[i]);
        int l = -1;
        if (temp != a + n && *temp == k - a[i]){
            l = temp - a;
        }
        cout << "left: " << l << endl;
        int r = lastPos(a, i + 1, n - 1, k - a[i]);
        cout << "right: " << r << endl;
        if (l != -1 && r != -1) ans += r - l + 1;
    }
    cout << ans;
    return 0;
}