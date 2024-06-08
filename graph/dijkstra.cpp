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

typedef pair<int, int> pai;

int n, m, s;
vector<pair<int, int>> dske[1000005];
int visited[1000005];

void inp()
{
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++)
    {
        int x, y, w; cin >> x >> y >> w;
        dske[x].push_back({y, w});
        dske[y].push_back({x, w});
    }
}

void dijkstra(int s)
{
    vector<int> d(n + 1, 1e9);
    priority_queue<pai, vector<pai>, greater<pai>> q;
    d[s] = 0;
    q.push({0, s});
    while(!q.empty())
    {
        auto temp = q.top(); q.pop();
        int weight = temp.first, finish = temp.second;
        // weight is the shortest path of root s
        if (weight > d[finish]) continue;
        for (auto x : dske[finish])
        {
            int v = x.first, w = x.second;
            if (d[v] > d[finish] + w)
            {
                d[v] = d[finish] + w;
                q.push({d[v], v});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << ' ';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    inp();
    dijkstra(s);
    return 0;
}