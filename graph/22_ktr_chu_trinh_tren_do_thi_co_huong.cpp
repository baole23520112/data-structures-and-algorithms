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

vector<int> adj[1005];
int visited[1005];
vector<int> parent(1005, 0);
// neu su dung visited {0, 1} thi se tim duoc duong di tu 1 diem den diem con lai
// nhung chua chac se tim duoc duong di xuoi vi du xet 6 thi 1 khong phai cha truc tiep
// 1->2->3->4->5
// |
// 6
bool dfs(int u)
{
    visited[u] = 1;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            if (dfs(v)) return true;
        }
        else if (visited[v] == 1) return true;
    }
    visited[u] = 2;
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
        adj[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i]) 
        {
            if (dfs(i)) 
            {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}