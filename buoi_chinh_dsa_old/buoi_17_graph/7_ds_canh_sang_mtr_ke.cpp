#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int a[1001][1001];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int v, e; cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y; cin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    for (int i = 1; i <= v; i++){
        for (int j = 1; j <= v; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}