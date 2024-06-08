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
    int x, y; cin >> x >> y;
    x--; y--;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == x){
                cout << a[y][j] << ' ';
            }
            else if (i == y){
                cout << a[x][j] << ' ';
            }
            else cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}