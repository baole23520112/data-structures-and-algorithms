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



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        p[i].first = i;
        p[i].second = x + y;
    }
    sort(p, p + n, [](pair<int, int> a, pair<int, int> b){
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first;
    });
    for (auto x : p)
    {
        cout << x.first + 1 << ' ';
    }
    return 0;
}