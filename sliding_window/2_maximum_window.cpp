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
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    multiset<int> se;
    for (int i = 0; i < k; i++){
        se.insert(a[i]);
    }
    cout << *se.begin() << ' ' << *se.rbegin() << endl;
    for (int i = k; i < n; i++){
        se.erase(se.find(a[i - k]));
        se.insert(a[i]);
        cout << *se.begin() << ' ' << *se.rbegin() << endl;
    }
    return 0;
}