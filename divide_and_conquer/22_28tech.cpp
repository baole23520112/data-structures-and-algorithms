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

ll F[61];

string a[3] = {"28tech", "C++", "DSA JAVA"};

string solve(int n, ll k)
{
    if (n == 1)
        return a[0];
    if (n == 2)
        return a[1];
    if (n == 3)
        if (k == 1)
            return "DSA";
        else
            return "JAVA";
    if (k <= F[n - 3])
        return solve(n - 3, k);
    else if (k <= F[n - 2] + F[n - 3])
        return solve(n - 2, k - F[n - 3]);
    else
        return solve(n - 1, k - F[n - 3] - F[n - 2]);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    F[1] = 1;
    F[2] = 1;
    F[3] = 2;
    for (int i = 4; i <= 60; i++)
    {
        F[i] = F[i - 3] + F[i - 2] + F[i - 1];
    }
    int t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}