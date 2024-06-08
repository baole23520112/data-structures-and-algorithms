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
int parent[1005], sz[1005];

void init()
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
}

// tim dai dien cho dinh u O(n)
int Find(int u)
{
    while(u != parent[u]) // dieu kien cua init
    {
        u = parent[u];
    }
    return u;
}

// optimize retrieving the parent of any element just O(1)
int optimizeFind(int u)
{
    if (u == parent[u])
        return u;
    else return parent[u] = optimizeFind(parent[u]); // tim duoc thi gan lai
}

bool Union(int u, int v)
{
    u = Find(u); // tim dai dien cua u
    v = Find(v); // tim dai dien cua v
    if (u == v) return false;
    if (u < v) parent[v] = u;
    else parent[u] = v;
    return true;
}

bool optimizeUnion(int u, int v)
{
    u = optimizeFind(u);
    v = optimizeFind(v);
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

// dung de dem so thanh phan lien thong cua do thi, check cycle

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    init();
    int cnt = n;
    bool ok = false;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        if (!optimizeUnion(x, y))
        {
            ok = true;
        }
    }
    if (ok) cout << 1;
    else cout << 0;
    return 0;
}