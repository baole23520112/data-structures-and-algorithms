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

bool check(vector<string> v)
{
    for (int j = 0; j < v[0].size(); j++)
    {
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i][j] < v[i - 1][j]) return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (auto &x : v)
        {
            sort(x.begin(), x.end());
        }
        if (check(v)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}