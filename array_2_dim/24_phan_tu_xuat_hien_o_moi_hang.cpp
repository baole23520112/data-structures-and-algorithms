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
    int a[n + 1][n + 1], check[101] = {0};
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < n + 1; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < n + 1; j++){
            if (check[a[i][j]] == i - 1){
                check[a[i][j]] = i;
            }
        }
    }
    for (int i = 0; i < 101; i++){
        if (check[i] == n){
            cout << i << ' ';
        }
    }
    return 0;
}