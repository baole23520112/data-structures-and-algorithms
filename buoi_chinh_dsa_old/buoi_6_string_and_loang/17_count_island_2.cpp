#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, m, a[50][50], count1 = 0;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void Try(int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 8; k++){
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
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j]){
                count1++;
                Try(i, j);
            }
        }
    }
    cout << count1 << endl;
    return 0;
}