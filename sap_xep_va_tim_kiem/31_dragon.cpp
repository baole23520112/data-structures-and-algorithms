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
    int n, s; cin >> n >> s;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        if (s > a[i].first) 
            s += a[i].second;
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}