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
    int n, k; cin >> n >> k;
    int a[n + 1];
    int pos[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    vector<int> v(a, a + n + 1);
    sort(a + 1, a + n + 1, greater<int>());
    for (int i = 1; i <= n; i++)
    {
        if (!k) break;
        if (v[i] != a[i])
        {
            swap(v[i], v[pos[a[i]]]);
            swap(pos[v[i]], pos[v[pos[a[i]]]]); // update lại pos
            k--;
        }
    }
    for (int i = 1; i <= n; i++) cout << v[i] << ' ';
    return 0;
}