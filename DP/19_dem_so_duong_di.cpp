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



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char s; cin >> s;
            if (s == '.') a[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1) continue;
            if (a[i][j] == 1)
            {
                a[i][j] = ((a[i - 1][j] % mod) + (a[i][j - 1] % mod)) % mod;
            }
        }
    }
    
    cout << a[n][n];
    return 0;
}