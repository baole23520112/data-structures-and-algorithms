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

int n, a[21], s = 0, sum = 0, check = 0;

void Try(int i, int bd)
{
    if (check == 1) return;
    for (int j = bd; j <= n; j++)
    {
        if (check == 1) return;
        if (sum + a[j] <= k){
            sum += a[j];
            if (sum == s)
            {
                check = 1;
            }
            else if (sum < s)
            {
                Try(i + 1, j + 1);
            }
            sum -= a[j];
        }
        else return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a + n);
    if (s & 1)
    {
        cout << 0;
        return 0;
    }
    else
        s /= 2;
    Try(1, 1);
    cout << check;
    return 0;
}
