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

int n, k, target;
int used[21], a[21];

bool Try(int k, int curr_sum, int i)
{
    if (k == 1) return true;
    if (curr_sum == target) return Try(k - 1, 0, 1);
    for (int j = i; j <= n; j++)
    {
        if (curr_sum + a[j] <= target)
        {
            if (used[j] == 0)
            {
                used[j] = 1;
                if (Try(k, curr_sum + a[j], j + 1)) return true;
                used[j] = 0;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int sum = accumulate(a + 1, a + n + 1, 0);
    if (sum % k != 0 || k > sum)
    {
        cout << 0;
        return 0;
    }
    target = sum / k;
    if (Try(k, 0, 1)) cout << 1;
    else cout << 0;
    return 0;
}