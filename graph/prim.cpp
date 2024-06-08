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
vector<pair<int, int>> dske[1000005];
typedef pair<int, int> pai;
int visited[1000005];

void inp()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, w; cin >> x >> y >> w;
        dske[x].push_back({y, w});
        dske[y].push_back({x, w});
    }
}

void prim(int s)
{
    priority_queue<pai, vector<pai>, greater<pai>> q;
    // implement the first element
    visited[s] = 1;
    for (auto x : dske[s])
    {
        if (!visited[x.first])
        {
            // push weight, finish
            q.push({x.second, x.first});
        }
    }
    ll d = 0;
    int dem = 0;
    while(!q.empty())
    {
        if (dem == n - 1) break;
        pai temp = q.top(); q.pop();
        // first is weight, second is finish
        if (!visited[temp.second])
        {
            d += temp.first;
            dem++;
            visited[temp.second] = 1;
            for (auto x : dske[temp.second])
            {
                if (!visited[x.first])
                {
                    q.push({x.second, x.first});
                }
            }
        }
    }
    if (dem == n - 1) cout << d << endl;
    else cout << "IMPOSSIBLE" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    inp();
    prim(1);
    return 0;
}