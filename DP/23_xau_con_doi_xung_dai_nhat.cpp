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

bool a[1005][1005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s; cin >> s;
    int n = s.size();
    int res = 0;
    s = "@" + s;
    for (int i = 1; i <= n; i++) a[i][i] = 1;
    for (int len = 2; len <= n; len++)
    {
        for (int start = 1; start <= n - len + 1; start++)
        {
            int end = start + len - 1;
            if (len == 2)
            {
                a[start][end] = (s[start] == s[end]);
            }
            else if (s[start] == s[end] && a[start + 1][end - 1])
            {
                a[start][end] = 1;
            }
            if (a[start][end])
            {
                res = max(res, end - start + 1);
            }
        }
    }
    cout << res;
    return 0;
}