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
    int n; cin >> n;
    int a[n + 5][n + 5];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            a[i][j] += max({a[i][j - 1], a[i - 1][j - 1], a[i + 1][j - 1]});
        }
    }
    int max1 = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        max1 = max(max1, a[i][n]);
    }
    cout << max1;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         cout << a[i][j] << ' ';
    //     }
    //     cout<< endl;
    // }
    return 0;
}