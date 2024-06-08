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

int dp[105][25005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s, n; cin >> s >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - a[i] >= 0)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + a[i]);
            }
        }
    }
    cout << dp[n][s];
    return 0;
}