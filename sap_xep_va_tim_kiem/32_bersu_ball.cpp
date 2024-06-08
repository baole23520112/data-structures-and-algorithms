#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + n);
    int i = 0, j = 0;
    int cnt = 0;
    while(i < n && j < m){
        if (abs(a[i] - b[j]) <= 1){
            cnt++;
            i++;
            j++;
        }
        else if (a[i] - b[j] > 1){
            j++;
        }
        else if (b[j] - a[i] > 1){
            i++;
        }
    }
    cout << cnt;
    return 0;
}