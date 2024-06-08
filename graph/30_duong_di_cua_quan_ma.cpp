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

int n, s, t, u, v;
int a[1005][1005];

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int bfs(int i, int j)
{
    queue<pair<pair<int, int>, int>> q;
    q.push({{i, j}, 0});
    a[i][j] = 0;
    while(!q.empty())
    {
        pair<pair<int, int>, int> temp = q.front();
        q.pop();
        if (temp.first.first == u && temp.first.second == v) return temp.second;
        for (int k = 0; k < 8; k++)
        {
            int x = dx[k] + temp.first.first;
            int y = dy[k] + temp.first.second;
            if (1 <= x && x <= n && 1 <= y && y <= n && a[x][y] == 1)
            {
                q.push({{x, y}, temp.second + 1});
                a[x][y] = 0;
            }
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << bfs(s, t) << endl;
    return 0;
}