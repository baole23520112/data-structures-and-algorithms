// #include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
// using namespace std;
// using ll = long long;
// #define mod 1000000007
// #define endl '\n'



// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, x; cin >> n >> x;
//     int a[n];
//     for (int &x : a) cin >> x;
//     int l = 0;
//     int sum = 0;
//     int cnt = 0;
//     for (int r = 0; r < n; r++){
//         sum += a[r];
//         while(sum >= x){
//             if (sum == x){ // check trước khi giảm
//                 cnt++;
//             }
//             sum -= a[l];
//             l++;
//         }
//         // if (sum == x){
//         //     cnt++;
//         // }
//     }
//     cout << cnt;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x; cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    map<ll, int> mp;
    ll sum = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (sum == x) cnt++;
        if (mp.find(sum - x) != mp.end()){ // check liệu có subarray từ 0 có tổng = sum - x, nếu có -> ngay từ vị trí kết thúc subarray đó đến hiện tại sẽ có tổng là x (liên tiếp )
            cnt++;
        }
        mp[sum] = 1; // đánh dấu xuất hiện subarray từ 0 có tổng = sum
    }
    cout << cnt;
    return 0;
}