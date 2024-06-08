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

struct edge 
{
    int u, v;
    int w;
};

int n, m;
int parent[100005], sz[100005];
vector<edge> adj;

void init()
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
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
    if (sz[u] < sz[v])
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

void kruskal()
{
    sort(adj.begin(), adj.end(), [](edge a, edge b){
        return a.w < b.w;
    });
    int cnt = 0, sum = 0;
    for (auto x : adj)
    {
        if (Union(x.u, x.v))
        {
            sum += x.w;
            cnt++;
        }
        if (cnt == n - 1) break;
    }
    if (cnt == n - 1) cout << sum << endl;
    else cout << "IMPOSSIBLE" << endl;
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
        int x, y, w; cin >> x >> y >> w;
        adj.push_back({x, y, w});
    }
    kruskal();
    return 0;
}