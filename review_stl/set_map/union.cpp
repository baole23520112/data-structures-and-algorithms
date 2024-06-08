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
    set<int> hop;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        hop.insert(a[i]);
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
        hop.insert(b[i]);
    }
    // rbegin point to the last element
    for (auto it = hop.rbegin(); it != hop.rend(); it++){
        cout << *it << ' ';
    }
    return 0;
}