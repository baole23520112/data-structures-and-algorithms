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
        int x, y; cin >> x >> y;
        a.push_back({x, 1});
        a.push_back({y, -1});
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    int temp = 0;
    for (int i = 0; i < a.size(); i++){
        temp += a[i].second;
        cnt = max(cnt, temp);
    }
    cout << cnt;
    return 0;
}