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

int pos(int a[], int b[], int n)
{
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (a[i] != b[i]) return i;
    // }
    // return n;
    int res = -1;
    int l = 0, r = n - 2;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == b[m])
            l = m + 1;
        else
        {
            res = m + 1;
            r = m - 1;
        }   
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n], b[n];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    cout << pos(a, b, n);
    return 0;
}