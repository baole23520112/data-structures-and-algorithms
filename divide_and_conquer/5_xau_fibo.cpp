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

ll F[100];

char solve(int n, ll k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k <= F[n - 2])
        return solve(n - 2, k);
    else 
        return solve(n - 1, k - F[n - 2]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    F[1] = 1;
    F[2] = 1;
    for (int i = 3; i <= 92; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    ll n, k; cin >> n >> k;
    cout << solve(n, k);
    return 0;
}