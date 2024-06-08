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

struct Edge
{
    int start, finish, weight;
    Edge(int x, int y, int z)
    {
        start = x;
        finish = y;
        weight = z;
    }
};

int n, m;
int parent[100005], sz[100005];
vector<Edge> adj;

void init()
{
    for (int i = 1; i <= n; i++)
    {
        sz[i] = 1;
        parent[i] = i;
    }
}

int Find(int u)
{
    if (u == parent[u])
        return u;
    else
        return parent[u] = Find(parent[u]);
}

bool Union(int u, int v)
{
    u = Find(u);
    v = Find(v);
    if (u == v) return false;
    if (sz[u] <= sz[v])
    {
        parent[u] = v;
        sz[v] += sz[u];
    }
    else
    {
        parent[v] = u;
        sz[u] += sz[v];
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++)
    {
        int x, y, z; cin >> x >> y >> z;
        Edge temp(x, y, z);
        adj.push_back(temp);
    }
    sort(adj.begin(), adj.end(), [](Edge a, Edge b){
        return a.weight < b.weight;
    });
    ll res = 0, cnt = 0;
    for (auto x : adj)
    {
        if (cnt == n - 1) break;
        if (Union(x.start, x.finish))
        {
            res += x.weight;
            cnt++;
        }
    }
    if (cnt != n - 1)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    cout << res << endl;
    return 0;
}