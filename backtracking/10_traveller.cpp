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

int n, c[100][100];
int x[100], visited[100], sum = 0, ans = INT_MAX, cmin = INT_MAX;

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (visited[j] == 0)
        {
            visited[j] = 1;
            sum += c[x[i - 1]][j];
            x[i] = j;
            if (i == n)
            {
                ans = min(ans, sum + c[j][1]);
            }
            else if (sum + (n - i + 1) * cmin < ans)
                Try(i + 1);
            visited[j] = 0;
            sum -= c[x[i - 1]][j];
        }
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
            cin >> c[i][j];
            if (c[i][j]) cmin = min(cmin, c[i][j]);
        }
    }
    x[1] = 1;
    visited[1] = 1;
    Try(2);
    cout << ans;
    return 0;
}