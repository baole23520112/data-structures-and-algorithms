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

int n, k, a[9], ok = 1;

void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = 1;
    }
}

void sinh()
{
    int i = k;
    while(i >= 1 && a[i] == n)
    {
        a[i] = 1;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    ktao();
    while(ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}