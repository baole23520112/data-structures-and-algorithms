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

int dp1[1000], dp2[1000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        dp1[i] = a[i];
        dp2[i] = a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[j] < a[i])
            {
                dp1[i] = max(dp1[i], dp1[j] + a[i]);
            }
        }
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            if (a[i] > a[j])
            {
                dp2[i] = max(dp2[i], dp2[j] + a[i]);
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        res = max(res, dp1[i] + dp2[i] - a[i]);
    }
    cout << res;
    return 0;
}