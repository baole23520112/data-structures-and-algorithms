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
    // int a[n + 1][m + 1];
    int **a = new int*[n + 1];
    for (int i = 0; i <= n; i++){
        a[i] = new int[m + 1];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int d[n + 1][m + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            d[i][j] = a[i][j] + d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
        }
    }
    int res = INT_MAX;
    for (int i = 3; i <= n; i++){
        for (int j = 3; j <= m; j++){
            int temp = d[i][j] - d[i - 3][j] - d[i][j - 3] + d[i - 3][j - 3];
            res = min(res, temp);
        }
    }
    for (int i = 0; i <= n; i++){
        delete[] a[i];
    }
    delete[] a;
    
    cout << res;
    return 0;
}