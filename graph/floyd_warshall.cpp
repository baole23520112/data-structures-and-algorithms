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

int n, m;
int dis[105][105];

void floyd_warshall()
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j) dis[i][j] = 0;
            else dis[i][j] = 1e9;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int x, y, w; cin >> x >> y >> w;
        dis[x][y] = w;
        dis[y][x] = w;
    }
    floyd_warshall();
    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        cout << dis[x][y] << endl;
    }
    return 0;
}