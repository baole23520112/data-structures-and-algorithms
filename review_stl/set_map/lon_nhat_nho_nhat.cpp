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
    multiset<int> a;
    int n; cin >> n;
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
            if (a.find(x) != a.end())
                a.erase(x);
        }
        else if (k == 3){
            cout << *a.begin() << endl;
        }
        else if (k == 4){
            auto it = a.end();
            it--;
            cout << *it << endl;
        }
    }
    return 0;
}