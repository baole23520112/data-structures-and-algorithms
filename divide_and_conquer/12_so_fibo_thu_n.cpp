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

struct matran
{
    ll a[2][2];

    friend matran operator * (matran x, matran y)
    {
        matran kq;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
            {
                kq.a[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    kq.a[i][j] += x.a[i][k] * y.a[k][j];
                    kq.a[i][j] %= mod;
                }
            }
        return kq;
    }
};

matran powMod(matran x, ll n)
{
    if (n == 1)
    {
        return x;
    }
    matran kq = powMod(x, n / 2);
    if (n & 1)
        return kq * kq * x;
    else
        return kq * kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    matran x;
    x.a[0][0] = x.a[0][1] = x.a[1][0] = 1;
    x.a[1][1] = 0;
    ll n; cin >> n;
    matran kq = powMod(x, n);
    cout << kq.a[0][1];
    return 0;
}