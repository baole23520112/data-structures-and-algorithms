#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int n, k;
int a[16], x[16];
ll sum = 0;

void in(int n)
{
    cout << '[';
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
        if (i != n) cout << ' ';
    }
    cout << ']' << endl;
}

void Try(int i, int bd)
{
    for (int j = bd; j <= n; j++)
    {
        sum += a[j];
        x[i] = a[j];
        if (sum == k)
        {
            in(i);
        }
        else if (sum < k)
        {
            Try(i + 1, j + 1);
        }
        sum -= a[j];
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1, 1);
    return 0;
}
