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
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    int cnt = 0;
    int sum = 0;
    for (int x : a){
        if (x - cnt > 0){
            sum += x - cnt;
            cnt++;
        }
    }
    cout << sum;
    return 0;
}