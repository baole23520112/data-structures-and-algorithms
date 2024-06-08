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
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back({x, i});
    }
    sort(a.begin(), a.end());
    int cnt = 1;
    for (int i = 1; i < n; i++){
        if (a[i].second < a[i - 1].second)
            cnt++;
    }
    cout << cnt;
    return 0;
}