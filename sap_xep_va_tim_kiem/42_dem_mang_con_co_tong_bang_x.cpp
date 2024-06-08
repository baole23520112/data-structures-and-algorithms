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
    int n, x; cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    map<ll, int> mp;
    ll sum = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (sum == x) ++cnt;
        if (mp.count(sum - x)) cnt += mp[sum - x]; // check liệu có bao nhiêu subarray từ 0 có tổng là sum - x -> nếu có thì subarray bđ vị trí kết thúc của subarray kia sẽ có tổng là x
        mp[sum]++; // đếm xem có bao nhiêu dãy con ở bđ từ 0 đến hiện tại có tổng là sum (vì có +/- nên có thể có nhiều sum giống nhau ex: 1 2 0 thì {1, 2} và {1, 2, 0} đều có sum = 3)
    }
    cout << cnt;
    return 0;
}