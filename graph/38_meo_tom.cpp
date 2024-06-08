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

int n, m, count1 = 0;
int ver[1005];
vector<int> adj[1005];
int visited[1005];

void dfs(int u, int cockroach, int check)
{
    if (cockroach > m) 
        return;
    visited[u] = 1;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            if (ver[v] == 0)
            {
                dfs(v, 0, ver[v]);
            }
            else if (check == 1 && ver[v] == 1)
            {
                dfs(v, cockroach + 1, ver[v]);
            }
            else 
            {
                dfs(v, 1, ver[v]);
            }
        }
    }
    if (adj[u].size() == 1 && u != 1)
    {
        count1++;
        return;
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
        cin >> ver[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1, ver[1], ver[1]);
    cout << count1 << endl;
    return 0;
}