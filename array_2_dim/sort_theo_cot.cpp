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
    int b[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < n; i++){
        sort(b[i], b[i] + n);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << b[j][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}