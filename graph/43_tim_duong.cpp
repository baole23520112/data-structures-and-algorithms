#include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int n, m, count = 0;
char a[505][505];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
bool check = false;
int s, t, u, v;
void dfs(int i, int j, int d, int count)
{
    // cout << i << ' ' << j << ' ' << d << ' ' << count << endl;
    if (check) return;
    if (count > 2) return;
    if (i == u && j == v)
    {
        check = true;
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if (0 <= x && x < n && 0 <= y && y < m && a[x][y] == '.')
        {
            a[x][y] = '*';
            if (d == k)
            {
                dfs(x, y, k, count);
            }
            else
            {
                dfs(x, y, k, count + 1);
            }
            a[x][y] = '.';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'T')
            {
                u = i;
                v = j;
                a[i][j] = '.';
            }
            if (a[i][j] == 'S')
            {
                s = i;
                t = j;
                a[i][j] = '.';
            }
        }
    }
    dfs(s, t, -1, -1);
    if (check) cout << "YES";
    else cout << "NO";
    return 0;
}