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
    ll n; cin >> n;
    int res = 0;
    int k = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            if (res < count) {
                res = count;
                k = i;
            }
        }
    }
    if (res == 0 && n > 1) {
        res = 1;
        k = n;
    }
    cout << k << ' ' << res;
    return 0;
}