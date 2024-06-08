#include <bits/stdc++.h>
// #pragma GCC optimize ("03,unroll-loops")
// #pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

ll fibo[93], a[10001];

bool check(ll n){
    for (int i = 0; i <= 92; i++){
        if (n == fibo[i])
            return true;
    }
    return false;
}

ll cs(ll n){
    ll sum = 0;
    while(n){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

void sieve(){
    for (int i = 0; i <= 10000; i++) a[i] = 1;
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(10000); i++){
        if (a[i]){
            for (int j = i * i; j <= 10000; j += i){
                a[j] = 0;
            }
        }
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fibo[1] = fibo[2] = 1;
    ll n; cin >> n;
    sieve();
    for (int i = 3; i <= 92; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 2; i < n; i++){
        if (a[i] && check(cs(i))){
            cout << i << ' ';
        }
    }
    return 0;
}