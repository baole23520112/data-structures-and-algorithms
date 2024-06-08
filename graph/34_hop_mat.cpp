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
vector<int> adj[1005];
int visited[1005];
map<int, int> mp;

void dfs(int u)
{
    mp[u]++;
    visited[u] = 1;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k >> n >> m;
    int a[k];
    for (int &x : a) cin >> x;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    for (int x : a)
    {
        dfs(x);
        memset(visited, 0, sizeof(visited));
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == k)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}