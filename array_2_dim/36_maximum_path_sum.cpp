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
        d[0][i] = a[0][i];
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == 0){
                d[i][j] = max(d[i - 1][j], d[i - 1][j + 1]) + a[i][j];
            }
            else if (j == n - 1){
                d[i][j] = max(d[i - 1][j], d[i - 1][j - 1]) + a[i][j];
            }
            else {
                d[i][j] = max({d[i - 1][j], d[i - 1][j - 1], d[i - 1][j + 1]}) + a[i][j];
            }
        }
    }
    cout << *max_element(d[n - 1], d[n - 1] + n);
    return 0;
}