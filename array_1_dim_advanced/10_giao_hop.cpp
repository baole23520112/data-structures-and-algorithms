#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n >> m;
    set<int> a, b, giao, hop;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
        hop.insert(x);
    }
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        b.insert(x);
        hop.insert(x);
    }
    for (auto x : a){
        if (b.find(x) != b.end()){
            giao.insert(x);
        }
    }
    for (int x : giao) cout << x << ' ';
    cout << endl;
    for (int x : hop) cout << x << ' ';
    return 0;
}