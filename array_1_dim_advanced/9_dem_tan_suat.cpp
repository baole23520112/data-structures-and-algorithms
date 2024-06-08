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
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for (int &x : a){
        cin >> x;
        mp[x]++;
    }
    for (auto x : mp){
        cout << x.first << ' ' << x.second << endl;
    }
    cout << endl;
    for (int x : a){
        if (mp[x]){
            cout << x << ' ' << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}