#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll fibo[101];

void init(){
    fibo[1] = 1;
    for (int i = 2; i < 93; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
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
    int n; cin >> n;
    ll a[n][n];
    int h1 = 0, c1 = 0, h2 = n - 1, c2 = n - 1;
    int count = 0;
    while(h1 <= h2 && c1 <= c2){
        for (int i = c1; i <= c2; i++){
            a[h1][i] = fibo[count++];
        }
        h1++;
        for (int i = h1; i <= h2; i++){
            a[i][c2] = fibo[count++];
        }
        c2--;
        if (c1 <= c2){
            for (int i = c2; i >= c1; i--){
                a[h2][i] = fibo[count++];
            }
            h2--;
        }
        if (h1 <= h2){
            for (int i = h2; i >= h1; i--){
                a[i][c1] = fibo[count++];
            }
            c1++;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}