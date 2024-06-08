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

int n, s, t[31], ans = INT_MAX, sum = 0, check = 0;

void Try(int i, int bd)
{
    for (int j = bd; j <= n; j++)
    {
        if (sum + t[j] <= s){
            sum += t[j];
            if (sum == s)
            {
                check = 1;
                ans = min(ans, i);
            }
            else if (sum < s)
            {
                Try(i + 1, j + 1);
            }
            sum -= t[j];
        }
        else return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> t[i];
    sort(t + 1, t + n + 1);
    Try(1, 1);
    if (check) cout << ans;
    else cout << -1;
    return 0;
}
