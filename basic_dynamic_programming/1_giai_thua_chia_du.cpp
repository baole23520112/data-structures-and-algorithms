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

ll a[1000005];

void ktao()
{
    a[1] = 1;
    for (ll i = 2; i <= 1000000; i++)
    {
        a[i] = a[i - 1] * i;
        a[i] %= mod;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ktao();
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}