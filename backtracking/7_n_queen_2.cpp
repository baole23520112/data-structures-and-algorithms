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

int a[9][9], ans = 0, sum = 0, n = 8;
int cot[105], cheo1[105], cheo2[105];

void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (cot[j] && cheo1[i + j - 1] && cheo2[i - j + n])
        {
            cot[j] = cheo1[i + j - 1] = cheo2[i - j + n] = 0;
            sum += a[i][j];
            if (i == n)
            {
                ans = max(ans, sum);
            }
            else
                Try(i + 1);
            sum -= a[i][j];
            cot[j] = cheo1[i + j - 1] = cheo2[i - j + n] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i <= 100; i++) 
        cot[i] = cheo1[i] = cheo2[i] = 1;
    Try(1);
    cout << ans;
    return 0;
}