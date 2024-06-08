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
        for (int &x : a) cin >> x;
        int sum = 0;
        for (int i = 0; i < k; i++){
            sum += a[i];
        }
        int ans = sum;
        int pos = 0;
        for (int i = k; i < n; i++){
            sum = sum - a[i - k] + a[i];
            if (sum > ans){
                ans = sum;
                pos = i - k + 1;
            }
        }
        cout << ans << endl;
        for (int i = 0; i < k; i++){
            cout << a[pos + i] << ' ';
        }
        cout << endl;
    }
    return 0;
}