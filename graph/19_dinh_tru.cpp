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

vector<int> v[1005];
bool visited[1005];
int n, m;

void dfs(int u)
{
    visited[u] = true;
    for (int x : v[u])
    {
        if (!visited[x])
            dfs(x);
    }
}

int tplt()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cnt++;
            dfs(i);
        }
    }
    return cnt;
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
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int cnt = 0;
    int bd = tplt();
    for (int i = 1; i <= n; i++)
    {
        visited[i] = true;
        if (bd < tplt())
        {
            cnt++;
        }
        memset(visited, 0, sizeof(visited));
    }
    cout << cnt << endl;
    return 0;
}