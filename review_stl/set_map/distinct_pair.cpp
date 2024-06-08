#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<pair<int, int>> a;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        a.insert({x, y});
    }
    cout << a.size();
    return 0;
}