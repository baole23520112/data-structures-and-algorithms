#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int check[1000005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    int max1 = 0;
    int min1 = INT_MAX;
    for (int &x : a) {
        cin >> x;
        max1 = max(max1, x);
        min1 = min(min1, x);
        check[x] = 1;
    }
    int cnt = 0;
    for (int i = min1; i <= max1; i++){
        if (!check[i])
            cnt++;
    }
    cout << cnt;
    return 0;
}