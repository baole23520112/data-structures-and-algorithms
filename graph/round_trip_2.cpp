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

vector<int> adj[100005];
int visited[100005];
int parent[100005], start, finish;

bool dfs(int u)
{
    visited[u] = 1;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            parent[v] = u;
            if (dfs(v)) return true;
        }
        else if (visited[v] == 1)
        {
            start = v, finish = u;
            return true;
        }
    }
    visited[u] = 2;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i))
            {
                vector<int> path;
                path.push_back(start);
                while(finish != start)
                {
                    path.push_back(finish);
                    finish = parent[finish];
                }
                path.push_back(finish);
                reverse(path.begin(), path.end());
                cout << path.size() << endl;
                for (int x : path) cout << x << ' ';
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}