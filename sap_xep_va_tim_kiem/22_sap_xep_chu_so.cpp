#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    set<char> se;
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++){
            se.insert(s[j]);
        }
    }
    for (char x : se) cout << x << ' ';
    return 0;
}