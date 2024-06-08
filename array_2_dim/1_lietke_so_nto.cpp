#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return n > 1;
}

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
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (check(a[i][j])){
                cout << a[i][j] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}