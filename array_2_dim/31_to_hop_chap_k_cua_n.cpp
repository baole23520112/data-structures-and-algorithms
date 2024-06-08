#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[1005][1005];

void init(){
    for (int i = 0; i < 1001; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 || i == j){
                a[i][j] = 1;
            }
            else {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1]; 
            }
        }
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        cout << a[n][k] << endl;
    }
    return 0;
}