#include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
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
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    int buoc = 0;
    ll res = 0;
    ll limit = 0;
    for (int i = 0; i < n; i++) 
    {
        if (i > res) 
        {
            cout << "CANNOT GET DESTINATION" << endl;
            return 0;
        }
        res = max(res, (ll)(i + a[i]));
        if (i == limit) 
        {
            buoc++;
            limit = res;
            if (limit >= n) 
            {
                break;
            }
        }
    }
    cout << buoc << endl;
    return 0;
}