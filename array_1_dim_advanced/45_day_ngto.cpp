#include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int a[1000005];

void sieve(){
    for (int i = 0; i <= 1000000; i++) a[i] = 1;
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++){
        if (a[i]){
            for (int j = i * i; j <= 1000000; j += i){
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
    int n; cin >> n;
    int b[n];
    for (int &x : b) cin >> x;
    for (int i = 1; i < n; i++){
        b[i] += b[i - 1];
    }
    int cnt = 0;
    for (int len = 1; len <= n; len++){
        for (int start = 0; start <= n - len; start++){
            int l = start, r = start + len - 1;
            int temp = 0;
            if (l == 0) temp = b[r];
            else {
                temp = b[r] - b[l - 1];
            }
            if (a[temp]) cnt++;
        }
    }
    cout << cnt;
    return 0;
}