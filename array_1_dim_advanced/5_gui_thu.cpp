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
    for (int i = 0; i < n; i++){
        if (i == 0){
            cout << a[i + 1] - a[i] << ' ' << a[n - 1] - a[i] << endl;
        }
        else if (i == n - 1){
            cout << a[i] - a[i - 1] << ' ' << a[n - 1] - a[0] << endl;
        }
        else {
            cout << min(a[i + 1] - a[i], a[i] - a[i - 1]) << ' ' << max(a[n - 1]- a[i], a[i] - a[0]) << endl;
        }
    }
    return 0;
}