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

int n, m, check = 1;
vector<int> adj[1005];
int color[1005];

void dfs(int u)
{
    for (int v : adj[u])
    {
        if (color[v] == 0)
        {
            color[v] = 3 - color[u];
            dfs(v);
        }
        else if (color[v] == color[u])
        {
            check = 0;
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
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!color[i])
        {
            color[i] = 1;
            dfs(i);
        }
    }
    if (check) cout << "YES";
    else cout << "NO";
    return 0;
}