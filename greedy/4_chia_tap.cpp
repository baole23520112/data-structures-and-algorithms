#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    int max1 = max(k, n - k);
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < max1; i++)
    {
        sum1 += a[i];
    }
    for (int i = max1; i < n; i++)
    {
        sum2 += a[i];
    }
    cout << sum1 - sum2;
    return 0;
}