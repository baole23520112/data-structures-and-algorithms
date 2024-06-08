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

ll F[1000005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        F[i] = F[i - 1] % mod + F[i - 2] % mod;
        F[i] %= mod;
    }
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << F[n] << endl;
    }
    return 0;
}