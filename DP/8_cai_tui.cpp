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

// dp[i][j] là giá trị lớn nhất của cái túi khi lựa chọn các đồ vật 
// 1,2,3 .. i có khối lượng tối đa là j

// 1. dp[i - 1][j] nếu không lựa chọn đồ vật i vào cái túi
// 2. max(dp[i][j], dp[i - 1][j - w[i]] + v[i]) nếu lựa chọn đồ thứ i vào túi

// int dp[1005][1005];

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, s; cin >> n >> s;
//     int w[n + 1], v[n + 1];
//     for (int i = 1; i <= n; i++) cin >> w[i];
//     for (int i = 1; i <= n; i++) cin >> v[i];
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if (j - w[i] >= 0)
//             {
//                 dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
//             }
//         }
//     }
//     cout << dp[n][s];
//     return 0;
// }

int dp[1005];

int main()
{
    int n, s; cin >> n >> s;
    int w[n + 1], v[n + 1];
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= w[i]; j--)
        {
            if (j >= w[i])
            {
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[s];
    return 0;
}