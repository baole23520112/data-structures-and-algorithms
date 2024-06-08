#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int n, m;
int a[105][105], b[105][105];
int s;

void Try(int i, int j ){
    int ans = 0;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (0 <= x && x < n && 0 <= y && y < m && b[x][y] == 1){
            ++ans;
        }
    }
    s += 4 - ans;
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
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    vector<int> v;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 1){
                s = 0;
                Try(i, j);
                cout << s << ' ';
            }
        }
    }
    return 0;
}