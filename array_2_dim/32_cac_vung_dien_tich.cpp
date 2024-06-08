#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int n, m;
char a[105][105];
int s;

void Try(int i, int j ){
    a[i][j] = '.';
    s++;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (0 <= x && x < n && 0 <= y && y < m && a[x][y] == '*'){
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
    vector<int> v;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == '*'){
                s = 0;
                Try(i, j);
                v.push_back(s);
            }
        }
    }
    sort(v.begin(), v.end());
    for (int x : v) cout << x << ' ';
    return 0;
}