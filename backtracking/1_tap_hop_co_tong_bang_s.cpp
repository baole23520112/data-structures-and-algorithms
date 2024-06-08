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

int n, k, s;
int sum = 0, cnt = 0;

void Try(int i, int pos)
{
    for (int j = pos; j <= n; j++)
    {
        if (sum + j <= s)
        {
            sum += j;
            if (i == k)
            {
                if (sum == s) cnt++;
            }
            else
                Try(i + 1, j + 1);
            sum -= j;
        }
        else
            return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k >> s; // x[i] <= n && x.size() = k && accumulate(x) = s;
    Try(1, 1);
    cout << cnt;
    return 0;
}