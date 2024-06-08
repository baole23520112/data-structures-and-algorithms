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
    set<int> a, b;
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        b.insert(x);
    }
    for (auto x : a){
        if (b.find(x) == b.end()){
            cout << x << ' ';
        }
    }
    return 0;
}