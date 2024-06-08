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



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[5] = {0};
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        a[x]++;
    }
    ll cnt = a[4] + a[3];
    if (a[3] <= a[1]) 
    {
        a[1] -= a[3];
    }
    else
    {
        a[1] = 0;
    }
    while (a[1] > 1 && a[2])
    {
        cnt++;
        a[1] -= 2;
        a[2]--;
    }
    while(a[2] > 1)
    {
        a[2] -= 2;
        cnt++;
    }
    if (a[2] || a[1])
    {
        cnt++;
    }
    cout << cnt; 
    return 0;
}