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
    pair<int, int> a[n];
    for (auto &x : a)
    {
        cin >> x.first >> x.second;
    }
    sort(a, a + n, [](pair<int, int> a, pair<int, int> b)->bool{
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first;
    });
    int sum = 1;
    int timeEnd = a[0].second;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first > timeEnd)
        {
            sum++;
            timeEnd = a[i].second;
        }
    }
    cout << sum;
    return 0;
}