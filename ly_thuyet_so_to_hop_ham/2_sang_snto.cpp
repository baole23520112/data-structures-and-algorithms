#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int a[10000000];

void sieve(){
    for (int i = 0; i < 10000000; i++) a[i] = 1;
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(10000000); i++){
        if (a[i]){
            for (int j = i * i; j <= 10000000; j += i){
                a[j] = 0;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if (a[x]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}