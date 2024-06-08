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



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll a[n];
    ll b[n];
    for (ll &x : a) cin >> x;
    for (ll i = 0; i < n; i++) b[i] = 1;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                b[i] = max(b[j] + 1, b[i]);
            }
        }
    }
    cout << *max_element(b, b + n);
    return 0;
}