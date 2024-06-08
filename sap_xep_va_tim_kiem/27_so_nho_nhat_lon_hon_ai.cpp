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
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    vector<int> b(a, a + n);
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++){
        auto it = upper_bound(b.begin(), b.end(), a[i]);
        if (it == b.end()) cout << "_ ";
        else cout << *it << ' ';
    }
    return 0;
}