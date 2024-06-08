#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll a[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    a[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        int j = i - 1, k1 = k;
        while(j >= 0 && k1--)
        {
            a[i] += (a[j] % mod);
            a[i] %= mod;
            j--;
        }
    }
    cout << a[n];
    return 0;
}