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

vector<int> adj[100005];
vector<int> parent(100005, 0);
bool visited[100005];
int n, m, start;

int dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            parent[v] = u;
            int temp = dfs(v);
            if (temp) return temp;
        }
        else if (v != parent[u])
        {
            start = v;
            return u;
        }
    }
    return 0;
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
        if (!visited[i])
        {
            int finish = dfs(i);
            if (finish)
            {
                vector<int> path;
                while(finish != start)
                {
                    path.push_back(finish);
                    finish = parent[finish];
                }
                path.push_back(finish);
                reverse(path.begin(), path.end());
                path.push_back(start);
                cout << path.size() << endl;
                for (int x : path) cout << x << ' ';
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}