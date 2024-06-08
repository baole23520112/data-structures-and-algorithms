#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

ll n, m, a[100][100];

void loang(int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 1){
            loang(x, y);
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
    int s, t, u, v;
    cin >> n >> m;
    cin >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    loang(s, t);
    if (a[u][v] == 1){
        cout << "NO";
    }
    else 
        cout << "YES";
    return 0;
}