#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n >> m;
    multiset<int> se;
    int a[m];
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        se.insert(x);
    }
    for (int &x : a) cin >> x;
    for (int x : a){
        auto it = se.upper_bound(x);
        if (it != se.begin()){
            it--;
            cout << *it << endl;
            se.erase(it);
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}