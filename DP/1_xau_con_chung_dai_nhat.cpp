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

int a[1005][1005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1, s2; cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    s1 = "@" + s1;
    s2 = "@" + s2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i] == s2[j])
            {
                a[i][j] = a[i - 1][j - 1] + 1;
            }
            else
            {
                a[i][j] = max(a[i - 1][j], a[i][j - 1]);
            }
        }
    }
    cout << a[n][m];
    return 0;
}