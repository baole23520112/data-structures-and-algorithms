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

// bool dp[205][500005];

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, s; cin >> n >> s;
//     int a[n + 1];
//     for (int i = 1; i <= n; i++) 
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         dp[i][0] = true;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             if (j >= a[i])
//             {
//                 dp[i][j] = dp[i - 1][j - a[i]] || dp[i - 1][j];
//             }
//             else dp[i][j] = dp[i - 1][j];
//         }
//     }
//     cout << dp[n][s];
//     return 0;
// }

int dp[500005];

int main()
{
    int n, s; cin >> n >> s;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            if (j >= a[i])
            {
                dp[j] = dp[j - a[i]] || dp[j];
            }
        }
    }
    cout << dp[s];
    return 0;
}