#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int func(vector<int> a, int n, int x){
    int res = -1; 
    int r = n - 1, l = 0;
    while(l <= r){
        int m = (r + l) / 2;
        if (a[m] == x){
            res = m;
            l = m + 1;
        }
        else if (a[m] < x){
            res = m;
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        auto it = lower_bound(a.begin(), a.end(), l);
        int firstPos = it - a.begin();
        int lastPos = func(a, n, r);
        cout << lastPos - firstPos + 1 << endl;
    }

    return 0;
}