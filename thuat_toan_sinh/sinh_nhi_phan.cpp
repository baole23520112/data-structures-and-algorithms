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

int n, x[1000], ok = 1;

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        x[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        --i;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        x[i] = 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ktao();
    while(ok)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << x[i] << ' ';
        }
        cout << endl;
        sinh();
    }
    return 0;
}