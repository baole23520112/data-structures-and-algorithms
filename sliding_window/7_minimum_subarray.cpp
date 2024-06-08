#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using ll = long long;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    int sum = 0, l = 0, pos = 0, leng = INT_MAX;
    for (int r = 0; r < n; r++){
        sum += a[r];
        while(l < n && sum >= k){
            if (r - l + 1 < leng){
                leng = r - l + 1;
                pos = l;
            }
            sum -= a[l];
            l++;
        }
    }
    if (leng != INT_MAX)
        for (int i = pos; i < pos + leng; i++){
            cout << a[i] << ' ';
        }
    else cout << -1;
    return 0;
}