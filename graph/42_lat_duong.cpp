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

int n, m, max1 = 1;
int parent[100005], sz[100005];

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
    if (u == v)
        return false;
    if (sz[u] <= sz[v])
    {
        parent[u] = v;
        sz[v] += sz[u];
        max1 = max(max1, sz[v]);
    }
    else
    {
        parent[v] = u;
        sz[u] += sz[v];
        max1 = max(max1, sz[u]);
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
    int cnt = n;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        if (Union(x, y))
            cnt--;
        cout << cnt << ' ' << max1 << endl;
    }
    return 0;
}