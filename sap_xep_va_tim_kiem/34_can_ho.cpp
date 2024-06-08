#include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0;
    int cnt = 0;
    while(i < n && j < m){
        if (abs(a[i] - b[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if (a[i] > b[j]){
            j++;
        }
        else if (a[i] < b[j]){
            i++;
        }
    }
    cout << cnt;
    return 0;
}