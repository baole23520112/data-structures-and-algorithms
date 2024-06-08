#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll a[100][100];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m; cin >> n >> m;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == 0 && j == 0) continue;
            else if (i == 0){
                a[i][j] += a[i][j - 1];
            }
            else if (j == 0){
                a[i][j] += a[i - 1][j];
            }
            else a[i][j] += max(a[i - 1][j], a[i][j - 1]);
        }
    }
    cout << a[n - 1][m - 1];
    return 0;
}