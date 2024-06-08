#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair<int, int>> v;
    int n; cin >> n;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            int count = 0;
            while(n % i == 0){
                count++;
                n /= i;
            }
            v.push_back({i, count});
        }
    }
    if (n > 1){
        v.push_back({n, 1});
    }
    for (auto x : v){
        cout << x.first << ' ';
    }
    cout << endl;
    for (auto x : v){
        cout << '(' << x.first << ", " << x.second << ") ";
    }
    cout << endl;
    bool check = false;
    for (auto x : v){
        for (int j = 0; j < x.second; j++){
            if (check){
                cout << " x ";
            }
            check = true;
            cout << x.first;
        }
    }
    return 0;
}