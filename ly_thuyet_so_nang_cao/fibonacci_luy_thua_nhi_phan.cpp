#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

void nhan(ll a[2][2], ll b[2][2]){
    ll res[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            res[i][j] = 0;
            for (int k = 0; k < 2; k++){
                res[i][j] += a[i][k] * b[k][j] % mod;
            }
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            a[i][j] = res[i][j];
        }
    }
}

void pow(ll n){
    ll res[2][2] = {{1, 0}, {0, 1}};
    ll a[2][2] = {{1, 1}, {1, 0}};
    while(n){
        if (n & 1){
            nhan(res, a);
        }
        nhan(a, a);
        n >>= 1;
    }
    cout << res[0][1] << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    pow(n);
    return 0;
}