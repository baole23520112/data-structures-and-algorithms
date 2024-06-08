#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(pair<int, int> a, pair<int, int> b){
    int x = abs(a.first - a.second);
    int y = abs(b.first - b.second);
    if (x != y)
        return x < y;
    else if (a.first != b.first)
        return a.first < b.first;
    return a.second > b.second;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cmp);
    for (auto x : a){
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}