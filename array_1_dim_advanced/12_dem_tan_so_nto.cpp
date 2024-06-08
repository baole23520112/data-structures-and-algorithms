#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

bool check(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return n > 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x;
    vector<int> v;
    map<int, int> mp;
    while(cin >> x){
       if (check(x)){
            v.push_back(x);
            mp[x]++;
       }
    }
    for (auto x : v){
        if (mp[x]){
            cout << x << ' ' << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}