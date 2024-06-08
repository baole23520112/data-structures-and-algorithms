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
    int n, m, p; cin >> n >> m >> p;
    ll a[n][m];
    ll b[m][p];
    ll res[n][p];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            res[i][j] = 0;
            for (int k = 0; k < m; k++){
                res[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}