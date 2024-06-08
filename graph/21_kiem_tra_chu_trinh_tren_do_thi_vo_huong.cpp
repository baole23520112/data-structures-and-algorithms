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


// DFS
vector<int> v[1005];
bool visited[1005];
vector<int> parent(1005, 0);

// bool dfs(int u)
// {
//     visited[u] = true;
//     for (int x : v[u])
//     {
//         if (!visited[x])
//         {
//             parent[x] = u;
//             if (dfs(x)) return true;
//         }
//         else if (x != parent[u])
//             return true;
//     }
//     return false;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m; cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int x, y; cin >> x >> y;
//         v[x].push_back(y);
//         v[y].push_back(x);
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             if (dfs(i))
//             {
//                 cout << 1;
//                 return 0;
//             }
//         }
//     }
//     cout << 0;
//     return 0;
// }

// BFS

bool bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        int i = q.front();
        q.pop();
        for (int x : v[i])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                parent[x] = i;
            }
            else if (x != parent[i])
                return true;
        }
    }
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
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (bfs(i))
            {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}