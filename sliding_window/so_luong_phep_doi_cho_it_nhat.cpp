#include <bits/stdc++.h>
using namespace std;

using ll = long long;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        int dem = 0;
        for (int &x : a) {
            cin >> x;
            if (x <= k) dem++;
        }
        int count = 0;
        for (int i = 0; i < dem; i++){
            if (a[i] <= k) count++;
        }
        int res = count;
        for (int i = dem; i < n; i++){
            if (a[i - dem] <= k) count--;
            if (a[i] <= k) count++;
            res = min(count, res);
        }
        cout << dem - res << endl;
    }
    return 0;
}