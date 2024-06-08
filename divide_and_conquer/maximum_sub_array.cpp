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

ll crossingSum(int a[], int l, int r, int m)
{
    ll sumRight = 0, sumLeft = 0;
    ll temp1 = 0, temp2 = 0;
    for (int i = m; i >= l; i--) // accumulate from mid to left
    {
        temp1 += a[i];
        sumLeft = max(sumLeft, temp1);
    }
    for (int i = m + 1; i <= r; i++)
    {
        temp2 += a[i];
        sumRight = max(sumRight, temp2); // accumulate from mid to right
    }
    return sumRight + sumLeft;
}

ll maxSum(int a[], int l, int r)
{
    if (l == r) return a[l]; // just 1 element
    int m = (l + r) / 2;
    return max({maxSum(a, l, m), maxSum(a, m + 1, r), crossingSum(a, l, r, m)});
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    cout << maxSum(a, 0, n - 1);
    return 0;
}