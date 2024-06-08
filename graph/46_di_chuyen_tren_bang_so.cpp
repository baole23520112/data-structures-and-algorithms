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

typedef pair<int, pair<int, int>> pai;

int n, m;
int a[505][505];
int d[505][505];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void dijkstra()
{
    priority_queue<pai, vector<pai>, greater<pai>> q;
    d[1][1] = a[1][1];
    q.push({a[1][1], {1, 1}});
    while(!q.empty())
    {
        auto temp = q.top(); q.pop();
        int weight = temp.first;
        pair<int, int> finish = temp.second;
        if (weight > d[finish.first][finish.second]) continue;
        for (int i = 0; i < 4; i++)
        {
            int x = finish.first + dx[i];
            int y = finish.second + dy[i];
            if (1 <= x && x <= n && 1 <= y && y <= m)
            {
                if (d[x][y] > a[x][y] + d[finish.first][finish.second])
                {
                    d[x][y] = a[x][y] + d[finish.first][finish.second];
                    q.push({d[x][y], {x, y}});
                }
            }
        }
    }
    cout << d[n][m] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j]; d[i][j] = 1e9;
        }
    }
    dijkstra();
    return 0;
}