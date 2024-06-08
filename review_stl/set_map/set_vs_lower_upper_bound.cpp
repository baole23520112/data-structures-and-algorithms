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
        int k; cin >> k;
        if (k == 1){
            int x; cin >> x;
            a.insert(x);
        }
        else if (k == 2){
            int x; cin >> x;
            auto pos = a.find(x);
            if (pos != a.end())
                a.erase(pos);
        }
        else if (k == 3){
            int x; cin >> x;
            auto it = a.lower_bound(x);
            if (it != a.end())
                cout << *it << endl;
            else cout << -1 << endl;
        }
        else if (k == 4){
            int x; cin >> x;
            auto it = a.upper_bound(x) - 1;
            if (it >= a.begin()){
                cout << *it << endl;
            }
            else cout << -1 << endl;
        }
    }
    return 0;
}