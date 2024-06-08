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
bool visited[1005];
vector<int> temp;

void dfs(int u)
{
    temp.push_back(u);
    visited[u] = true;
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
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            temp.clear();
            dfs(i);
            int temp2 = -1;
            int res = i;
            for (int x : temp)
            {
                if (temp2 < (int)adj[x].size())
                {
                    temp2 = adj[x].size();
                    res = x;
                }
                else if (temp2 == (int)adj[x].size() && x < res)
                {
                    res = x;
                }
            }
            ans.push_back(res);
        }
    }
    sort(ans.begin(), ans.end());
    for (int x : ans) cout << x << ' ';
    return 0;
}