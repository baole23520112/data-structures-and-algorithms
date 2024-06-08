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
    int n, x; cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    map<ll, int> mp;
    ll sum = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (sum == x) ++cnt;
        if (mp.count(sum - x)) cnt += mp.count(sum - x);
        mp[sum]++;
    }
    cout << cnt;
    return 0;
}