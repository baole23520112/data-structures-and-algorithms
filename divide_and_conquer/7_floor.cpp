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

int found(int a[], int n, int k)
{
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == k)
        {
            return a[m];
        }
        else if (a[m] < k)
        {
            res = a[m];
            l = m + 1;
        }
        else 
        {
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
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    cout << found(a, n, k);
    return 0;
}