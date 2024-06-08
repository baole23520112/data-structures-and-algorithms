#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int danh[1000005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    map<int, int> mp;
    
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
        if (mp[x] == 1)
            danh[x] = i;
    }
    vector<pair<int, int>> b;
    for (auto x : mp){
        b.push_back(x);
    }
    sort(b.begin(), b.end(), [](pair<int, int> a, pair<int, int> b)->bool{
        if (a.second != b.second)
            return a.second > b.second;
        return a < b;
    });
    for (auto x : b){
        for (int i = 0; i < x.second; i++){
            cout << x.first << ' ';
        }
    }
    cout << endl;
    sort(b.begin(), b.end(), [](pair<int, int> a, pair<int, int> b)->bool{
        if (a.second != b.second)
            return a.second > b.second;
        return danh[a.first] < danh[b.first]; 
    });
    for (auto x : b){
        for (int i = 0; i < x.second; i++){
            cout << x.first << ' ';
        }
    }
    return 0;
}