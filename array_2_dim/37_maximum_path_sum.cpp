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
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int d[n][n];
    for (int i = 0; i < n; i++){
        d[i][0] = a[i][0];
    }
    for (int j = 1; j < n; j++){
        for (int i = 0; i < n; i++){
            if (i == n - 1){
                d[i][j] = a[i][j] + max(d[i][j - 1], d[i - 1][j - 1]);
            }
            else if (i == 0){
                d[i][j] = a[i][j] + max(d[i][j - 1], d[i + 1][j - 1]);
            }
            else {
                d[i][j] = a[i][j] + max({d[i][j - 1], d[i + 1][j - 1], d[i - 1][j - 1]});
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = max(ans, d[i][n - 1]);
    }
    cout << ans;
    return 0;
}

