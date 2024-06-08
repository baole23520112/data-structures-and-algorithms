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
    int left = 0;
    int ans = 0;
    ll temp = 0;
    for (int right = 0; right < n; right++){
        temp += a[right]; // mỗi lần thi cộng thêm vào temp
        while(temp > s){ // có thể sẽ lớn hơn nên phải trừ bớt cho đến khi có thể cộng thêm
            temp -= a[left]; // trừ trừ
            left++; // tăng left để trừ tiếp
        }
        ans = max(ans, right - left + 1);
    }
    cout << ans;
    return 0;
}