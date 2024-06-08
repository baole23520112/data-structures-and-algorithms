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
    int s, d; cin >> s >> d;
    if (d * 9 < s) cout << -1;
    else
    {
        int a[d + 1] = {0};
        s--;
        int so9 = s / 9;
        int sodu = s % 9;
        int i = d;
        while(so9--)
        {
            a[i--] = 9;
        }
        a[i] += sodu;
        a[1] = 1;
        for (int i = 1; i <= d; i++) cout << a[i];
    }
    return 0;
}