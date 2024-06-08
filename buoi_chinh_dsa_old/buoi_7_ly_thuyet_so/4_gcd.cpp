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
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << gcd(gcd(a, b), gcd(c, d)) << ' ' << lcm(lcm(a, b), lcm(c, d));
    return 0;
}