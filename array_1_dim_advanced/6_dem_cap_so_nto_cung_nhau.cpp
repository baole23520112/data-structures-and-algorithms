#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    int count = 0;
    for (int &x : a) cin >> x;
    for (int i = 0; i < n - 1; ++i){
        for (int j = i + 1; j < n; ++j){
            if (gcd(a[i], a[j]) == 1){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}