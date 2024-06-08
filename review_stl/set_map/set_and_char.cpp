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
    set<char> a;
    for (int i = 0; i < n; i++){
        char s;
        cin >> s;
        a.insert(s);
    }
    cout << a.size() << endl;
    for (auto x : a){
        cout << x << ' ';
    }
    cout << endl;
    for (auto it = a.rbegin(); it != a.rend(); it++){
        cout << *it << ' ';
    }
    return 0;
}