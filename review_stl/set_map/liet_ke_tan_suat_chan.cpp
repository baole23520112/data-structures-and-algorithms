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
    map<int, int> a;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[x]++;
    }
    for (auto x : a){
        if (x.second % 2 == 0){
            cout << x.first << ' ' << x.second << endl;
        }
    }
    cout << endl;
    for (auto it = a.rbegin(); it != a.rend(); it++){
        if (it->second % 2 == 0){
            cout << it->first << ' ' << it->second << endl;
        }
    }
    return 0;
}