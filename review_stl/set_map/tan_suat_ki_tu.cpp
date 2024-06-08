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
    map<char, int> a;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        char x; cin >> x;
        a[x]++;
    }
    pair<char, int> min = *min_element(a.begin(), a.end());
    pair<char, int> max = *max_element(a.begin(), a.end());
    cout << min.first << ' ' << min.second << endl;
    cout << endl;
    cout << max.first << ' ' << max.second << endl;
    cout << endl;
    for (auto x : a){
        cout << x.first << ' ' << x.second << endl;
    }
    cout << endl;
    for (map<char, int>::iterator it = a.end(); it != a.begin(); it--){
        if (it == a.end()) continue;
        cout << it->first << ' ' << it->second << endl;
    }
    auto it = a.begin();
    cout << it->first << ' ' << it->second << endl;
    return 0;
}