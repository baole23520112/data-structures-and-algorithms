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
    int  a[n];
    ll b[n];
    for (int &x : a) cin >> x;
    b[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            b[i] = abs(a[i] - a[i - 1]);
        }
        else
        {
            b[i] = min(abs(a[i] - a[i - 2]) + b[i - 2], abs(a[i] - a[i - 1]) + b[i - 1]);
        }
    }
    cout << b[n - 1];
    return 0;
}