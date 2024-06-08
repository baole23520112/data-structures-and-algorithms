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
vector<int> visited(1005, 0);
int stt = 1;

void dfs(int i)
{
    visited[i] = stt;
    for (int x : v[i])
    {
        if (!visited[x])
        {
            dfs(x);
        }
    }
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
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            stt++;
        }
    }
    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        if (visited[x] == visited[y]) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}