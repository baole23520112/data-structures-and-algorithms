#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// int f[1000005];

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, s; cin >> n >> s;
//     int a[n];
//     for (int &x : a) cin >> x;
//     for (int i = 1; i <= s; i++)
//     {
//         f[i] = 1e9;
//         for (int x : a)
//         {
//             if (i - x >= 0)
//             {
//                 f[i] = min(f[i], f[i - x] + 1);
//             }
//         }
//     }
//     if (f[s] == 1e9) cout << -1;
//     else cout << f[s];
//     return 0;
// }

int dp[1000005];

int main()
{
    int n, s; cin >> n >> s;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= s; i++) dp[i] = 1e9;
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (j >= a[i])
            {
                dp[j] = min(dp[j], dp[j - a[i]] + 1);
            }
            // cout << i << ' ' << j << ' ' << dp[i] << endl;
        }
    }
    cout << dp[s];
    return 0;
}

// int n, s, res = INT_MAX;
// int a[105];
// void dfs(int sum, int cnt)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (sum + a[i] <= s)
//         {
//             if (sum + a[i] == s)
//             {
//                 res = min(res, cnt + 1);
//             }
//             else if (sum + a[i] < s)
//                 dfs(sum + a[i], cnt + 1);
//         }
//     }
// }

// int main()
// {
//     cin >> n >> s;
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     dfs(0, 0);
//     cout << res;
//     return 0;
// }