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

int dp[1000005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, s; cin >> n >> s;
    int a[n];
    dp[0] = 1;
    for (int &x : a) cin >> x;
    for (int i = 1; i <= s; i++)
    {
        for (int x : a)
        {
            if (i >= x)
            {
                dp[i] += (dp[i - x] % mod);
                dp[i] %= mod;
            }
        }
    }
    cout << dp[s];
    return 0;
}