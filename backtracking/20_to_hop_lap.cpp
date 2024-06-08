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

int n, k;
char a[16], x[16];

void Try(int i, int position)
{
    for (int j = position; j <= n; j++)
    {
        x[i] = a[j];
        if (i == k)
        {
            for (int q = 1; q <= k; q++)
            {
                cout << x[q];
            }
            cout << endl;
        }
        else
            Try(i + 1, j);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1, 1);
    return 0;
}