#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--){
        if (a[i] & 1) cout << a[i] << ' ';
    }
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0) cout << a[i] << ' ';
    }
    return 0;
}