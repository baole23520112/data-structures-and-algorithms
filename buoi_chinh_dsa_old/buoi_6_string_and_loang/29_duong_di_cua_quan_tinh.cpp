#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[4] = {-1, -1, 1, 1};
int dy[4] = {-1, 1, -1, 1};

int a[21][21], n, count1 = 0;

void Try(int i, int j){
    a[i][j] = 1;
    count1++;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (0 <= x && x < n && 0 <= y && y < n && a[x][y] == 0){
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
    int s, t; cin >> s >> t;
    s--; t--;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    Try(s, t);
    cout << count1;
    return 0;
}