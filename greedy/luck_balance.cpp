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
    ll sum = 0;
    int n, k; cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        if (y == 1) v.push_back(x);
        else sum += x;
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size(); i++)
    {
        if (k > 0)
        {
            sum += v[i];
            k--;
        }
        else
        {
            sum -= v[i];
        }
    }
    cout << sum;
    return 0;
}