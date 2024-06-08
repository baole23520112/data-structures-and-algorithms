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

int n, m, s;
vector<int> adj[1005];
int visited[1005];

void bfs(int u)
{
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int temp = q.front(); 
        q.pop();
        for (int v : adj[temp])
        {
            if (!visited[v])
            {
                visited[v] = 1;
                cout << temp << "->" << v << endl;
                q.push(v);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
        sort(adj[i].begin(), adj[i].end());

    bfs(s);
    return 0;
}