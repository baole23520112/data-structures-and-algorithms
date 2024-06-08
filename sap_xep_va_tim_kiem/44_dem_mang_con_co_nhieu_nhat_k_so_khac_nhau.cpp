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
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    int l = 0;
    map<int, int> mp;
    ll cnt = 0;
    for (int r = 0; r < n; r++){
        mp[a[r]]++;
        while(mp.size() > k){
            mp[a[l]]--;
            if (mp[a[l]] == 0) mp.erase(a[l]);
            l++;
        }
        cnt += r - l + 1;
    }
    cout << cnt;
    return 0;
}