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
    int n, m; cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int max1 = 0, min1 = 1e9;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            max1 = max(max1, a[i][j]);
            min1 = min(min1, a[i][j]);
        }
    }
    cout << min1 << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (min1 == a[i][j]){
                cout << i + 1 << ' ' << j + 1 << endl;
            }
        }
    }
    cout << max1 << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (max1 == a[i][j]){
                cout << i + 1 << ' ' << j + 1 << endl;
            }
        }
    }
    return 0;
}