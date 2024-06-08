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

int n, m, res = 0;
vector<int> adj[1005], t_adj[1005];
int visited[1005];
stack<int> topo;

void dfs(int u)
{
    visited[u] = 1;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
    topo.push(u);
}

void dfs2(int u)
{
    visited[u] = 1;
    for (int v : t_adj[u])
    {
        if (!visited[v])
        {
            dfs2(v);
        }
    }
}

void kosaraju()
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    memset(visited, 0, sizeof(visited));
    while (!topo.empty())
    {
        int u = topo.top();
        topo.pop();
        if (!visited[u])
        {
            res++;
            dfs2(u);
        }
    }
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
        adj[x].push_back(y);
        t_adj[y].push_back(x);
    }
    kosaraju();
    if (res == 1) cout << 1;
    else cout << 0;
    return 0;
}