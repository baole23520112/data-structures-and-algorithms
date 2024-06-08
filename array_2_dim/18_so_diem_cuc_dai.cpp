#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m, a[105][105];

bool Try(int i, int j){
    for (int k = 0; k < 8; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (0 <= x && x < n && 0 <= y && y < m){
            if (a[x][y] >= a[i][j]) return false;
        }
    }
    return true;
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
    int dem = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (Try(i, j)){
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}