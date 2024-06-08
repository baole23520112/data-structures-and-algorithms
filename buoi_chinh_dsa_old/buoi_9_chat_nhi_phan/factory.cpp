#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

// đáp ứng các đề bài tìm min, max, tổi thiểu, tối đa
// tìm min max của cái gì, thì chặt nhị phân trên cái đó
// f(time) = t, time tăng thì t cũng tăng, chặt time xét t

bool check(int a[], int n, int t, ll time){
    ll dem = 0;
    for (int i = 0; i < n; i++){
        dem += time / a[i];
        if (dem >= t) return true; // tránh bị tràn
    }
    return dem >= t;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, t; cin >> n >> t;
    int a[n];
    for (int &x : a) cin >> x;
    ll left = 0, right = 1ll * (*min_element(a, a + n)) * t;
    ll ans = -1;
    while(left <= right){
        ll mid = (right + left) / 2;
        if (check(a, n, t, mid)){
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    cout << ans;
    return 0;
}