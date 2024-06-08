#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int a[500][500];
int n, m, max2 = 0, temp;

void Try(int i, int j, int &temp){
    a[i][j] = 0;
    temp++; // Increment the count for each cell in the island
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (0 <= x && x < n && 0 <= y && y < m && a[x][y] == 1){
            Try(x, y, temp);
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
                temp = 0;
                Try(i, j, temp);
                max2 = max(max2, temp);
            }
        }
    }
    cout << max2;
    return 0;
}