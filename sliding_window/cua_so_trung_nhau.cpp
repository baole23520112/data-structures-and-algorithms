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
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        set<int> se;
        for (int i = 0; i < k; i++){
            if (se.count(a[i])){
                ok = true; break;
            }
            s.insert(a[i]);
        }
        for (int i = k; i < n; i++){
            s.erase(a[i - k]);
            if (s.count(a[i])){
                ok = true; break;
            }
        }
    }
    return 0;
}