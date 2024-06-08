#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    if (a.first != b.first)
        return a.first < b.first;
    else if (a.second.first != b.second.first)
        return a.second.first < b.second.first;
    return a.second.second < b.second.second;
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
    pair<int, pair<int, int>> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }
    sort(a, a + n, cmp);
    for (auto x : a){
        cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
    }
    return 0;
}