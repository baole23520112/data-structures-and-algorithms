#include <bits/stdc++.h>
using namespace std;

using ll = long long;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s; cin >> n >> s;
    int a[n];
    for (int &x : a) cin >> x;
    int temp = 0;
    int ans = INT_MAX;
    int left = 0;
    for (int right = 0; right < n; right++){
        temp += a[right];
        while(temp >= s){ // ngay khi thỏa điều kiện lớn hơn thì cập nhật và giảm temp 
            ans = min(ans, right - left + 1); // cập nhật
            temp -= a[left]; // giảm
            left++; // tăng left để tiếp tục giảm
        }
    }
    if (ans == INT_MAX) cout << -1;
    else
        cout << ans;
    return 0;
}