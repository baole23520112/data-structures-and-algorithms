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
    int l = 0;
    map<int, int> mp;
    int cnt = 0;
    for (int r = 0; r < n; r++){
        mp[a[r]]++; 
        while(mp[a[r]] > 1){
            mp[a[l]]--;
            l++;
        }
        cnt = max(cnt, r - l + 1);
    }
    cout << cnt;
    return 0;
}