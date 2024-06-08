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

int n, m;
vector<int> v[1005];
bool visited[1005];
vector<pair<int, int>> edge;

void dfs(int u, int x, int y)
{
    visited[u] = true;
    for (int t : v[u])
    {
        if ((u == x && t == y) || (u == y && t == x)) continue;
        if (!visited[t])
            dfs(t, x, y);
    }
}

int tplt(int x, int y)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cnt++;
            dfs(i, x, y);
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        edge.push_back({x, y});
    }
    int bd = tplt(0, 0);
    int cnt = 0;
    for (auto x : edge)
    {
        memset(visited, 0, sizeof(visited));
        if (bd < tplt(x.first, x.second))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}