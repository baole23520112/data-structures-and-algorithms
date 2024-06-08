#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using ll = long long;

bool containsNearbyDuplicate(vector<int>& a, int k) {
    int n = a.size();
    multiset<int> se;
    for (int i = 0; i <= k && i < n; i++){
        if (se.find(a[i]) != se.end())
            return true;
        se.insert(a[i]);
    }
    for (int i = k + 1; i < n; i++){
        auto it = se.find(a[i - k - 1]);
        if (it != se.end()) se.erase(it);
        if (se.find(a[i]) != se.end())
            return true;
        se.insert(a[i]);
    }
    return false;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k; cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    if (containsNearbyDuplicate(a, k)){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}