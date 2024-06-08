#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, m;
int a[100 + 1][100 + 1];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    }
    int t; cin >> t;
    while(t--){
        int h1, h2, c1, c2;
        cin >> h1 >> h2 >> c1 >> c2;
        cout << a[h2][c2] - a[h1 - 1][c2] - a[h2][c1 - 1] + a[h1 - 1][c1 - 1] << endl;
    }
    return 0;
}