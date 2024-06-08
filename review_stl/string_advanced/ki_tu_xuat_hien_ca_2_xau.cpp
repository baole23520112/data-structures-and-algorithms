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
    set<char> s1, s2, giao, hop;
    string a, b;
    cin >> a;
    for (int i = 0; i < a.size(); i++){
        s1.insert(a[i]);
        hop.insert(a[i]);
    }
    cin >> b;
    for (int i = 0; i < b.size(); i++){
        s2.insert(b[i]);
        hop.insert(b[i]);
    }
    for (auto x : s1){
        if (s2.find(x) != s2.end()){
            giao.insert(x);
        }
    }
    for (auto x : giao){
        cout << x;
    }
    cout << endl;
    for (auto x : hop){
        cout << x;
    }
    return 0;
}