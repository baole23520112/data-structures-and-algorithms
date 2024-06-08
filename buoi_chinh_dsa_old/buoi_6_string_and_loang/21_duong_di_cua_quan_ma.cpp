#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[100][100], n;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

void Try(int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 8; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (0 <= x && x < n && 0 <= y && y < n && a[x][y] == 1){
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
    cin >> n;
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    s--; t--; u--; v--;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    Try(s, t);
    if (a[u][v] == 0) cout << "YES";
    else cout << "NO";
    return 0;
}