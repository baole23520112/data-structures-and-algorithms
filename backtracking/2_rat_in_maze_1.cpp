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

int n, a[14][14], check = 0;
string ans = "";

void Try(int i, int j)
{
    if (i == n && j == n)
    {
        check = 1;
        cout << ans << endl;
        return;
    }
    if (i + 1 <= n && a[i + 1][j] == 1)
    {
        a[i + 1][j] = 0;
        ans += 'D';
        Try(i + 1, j);
        a[i + 1][j] = 1;
        ans.pop_back();
    }
    if (j + 1 <= n && a[i][j + 1] == 1)
    {
        a[i][j + 1] = 0;
        ans += 'R';
        Try(i, j + 1);
        a[i][j + 1] = 1;
        ans.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1, 1);
    if (!check) cout << -1;
    return 0;
}