#include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

// chia hết thì subarray phải có số dư là 0

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n + 1] = {0};
    for (int i = 1; i <= n; i++) cin >> a[i];
    map<int, int> mp;
    mp[0] = 1;
    ll sum = 0, cnt = 0;
    // đồng dư
    for (int i = 1; i <= n; i++){
        sum += (a[i] % n + n) % n;
        sum %= n;
        if (mp.find(sum) != mp.end()) cnt += mp[sum]; // check liệu có subarray từ 0 có số dư là sum không -> nếu có thì subarray bđ từ vị trí kết thúc của subarray kia sẽ có số dư = 0
        mp[sum]++; // đếm các subarray bđ từ 0 đến hiện tại có số dư là sum (có thể có nhiều subarray có cùng số dư)
    }
    cout << cnt;
    return 0;
}