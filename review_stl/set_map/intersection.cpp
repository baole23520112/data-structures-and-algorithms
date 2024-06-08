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
    set<int> b;
    int n, m; cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        b.insert(x);
    }
    for (int i = 0; i < n; i++){
        if (b.find(a[i]) != b.end()){
            cout << a[i] << ' ';
            for (int j = i + 1; j < n; j++){
                if (a[j] == a[i]) a[j] = -1;
            }
        }
            
    }
    
    return 0;
}