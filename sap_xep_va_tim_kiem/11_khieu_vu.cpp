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
    int cnt = 0;
    int i = 0, j = 0;
    while(i < n && j < m){
        if (a[i] > b[j]){
            cnt++;
            j++;
            i++;
        }
        else {
            i++;
        }
    }
    cout << cnt;
    return 0;
}