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

int n, a[31], s, check = 0, sum = 0, ans = INT_MAX;

void Try(int i, int pos)
{
    for (int j = pos; j <= n; j++)
    {
        if (sum + a[j] <= s)
        {
            sum += a[j];
            if (sum == s)
            {
                check = 1;
                ans = min(ans, i);
            }
            else if (sum < s)
            {
                Try(i + 1, j + 1);
            }
            sum -= a[j];
        }
        else 
            return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1, 1);
    if (check) cout << ans;
    else cout << -1;
    return 0;
}