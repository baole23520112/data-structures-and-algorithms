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
        auto it = lower_bound(a + i, a + n, k - a[i]);
        if (it == a + n){
            ans += n - 1 - i;
        }
        else if (it - a - 1 - i >= 0) {
            ans += (it - a - 1 - i);
        }
        cout << "left: " << i << endl;
        cout << "right: " << it - a << endl;
    }
    cout << ans;
    return 0;
}