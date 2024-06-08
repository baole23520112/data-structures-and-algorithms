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
    int n; cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if (a.find(x) != a.end()){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}