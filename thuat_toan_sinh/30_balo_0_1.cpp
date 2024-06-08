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
    int n, s; cin >> n >> s;
    int a[n], b[n];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    int ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int temp1 = 0, temp2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                temp1 += a[j];
                temp2 += b[j];
            }
        }
        if (temp1 <= s)
        {
            ans = max(ans, temp2);
        }
    }
    cout << ans;
    return 0;
}