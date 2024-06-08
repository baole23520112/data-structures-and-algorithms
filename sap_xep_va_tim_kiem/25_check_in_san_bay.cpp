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
    pair<int, int> a[n];
    for (auto &x : a) cin >> x.first >> x.second;
    sort(a, a + n);
    int timeEnd = a[0].first + a[0].second;
    for (int i = 1; i < n; i++){
        if (timeEnd > a[i].first){
            timeEnd += a[i].second;
        }
        else {
            timeEnd = a[i].first + a[i].second;
        }
    }
    cout << timeEnd;
    return 0;
}