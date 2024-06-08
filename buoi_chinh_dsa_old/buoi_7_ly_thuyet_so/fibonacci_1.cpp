#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

ll fibo[93];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fibo[1] = fibo[2] = 1;
    int n; cin >> n;
    for (int i = 3; i <= n; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 1; i <= n; i++){
        cout << fibo[i] << endl;
    }
    return 0;
}