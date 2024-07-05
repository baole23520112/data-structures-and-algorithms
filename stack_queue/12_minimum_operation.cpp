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

int bfs(int u, int v)
{
    queue<pair<int, int>> q;
    q.push({u, 0}); // first: value, second: steps
    set<int> se; se.insert(u);
    while(!q.empty())
    {
        auto temp = q.front(); q.pop();
        if (temp.first == v) return temp.second;
        if (temp.first > 1 && se.find(temp.first - 1) == se.end())
        {
            q.push({temp.first - 1, temp.second + 1});
            se.insert(temp.first - 1);
        }
        if (temp.first < v && se.find(temp.first * 2) == se.end())
        {
            q.push({temp.first * 2, temp.second + 1});
            se.insert(temp.first * 2);
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        cout << bfs(x, y) << endl;
    }
    return 0;
}