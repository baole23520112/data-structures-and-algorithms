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
    int n, x; cin >> n >> x;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    auto it = upper_bound(a.begin(), a.end(), x);
    if (it != a.end()){
        int pos = it - a.begin();
        pos--;
        if (pos >= 0) cout << pos << endl;
        else cout << -1;
    }
    else cout << -1;
    return 0;
}