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
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    ll F[n];
    F[0] = 0;
    for (int i = 1; i < n; i++)
    {
        ll temp = LLONG_MAX;
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 0)
            {
                temp = min(temp, F[i - j] + abs(a[i] - a[i - j]));
            }
        }
        F[i] = temp;
    }
    cout << F[n -1];
    return 0;
}