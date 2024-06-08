#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[100][100], n, m;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void Try(int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (0 <= x && x < n && 0 <= y && y < m && a[x][y] == 1){
            Try(x, y);
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
    cin >> n >> m;
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    s--; t--; u--; v--;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    Try(s, t);
    if (a[u][v] == 0) cout << "YES";
    else cout << "NO";
    return 0;
}