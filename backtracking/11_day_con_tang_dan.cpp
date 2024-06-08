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

int n, a[21], x[21];
vector<string> v;

void Try(int i, int pos)
{
    for (int j = pos; j <= n; j++)
    {
        if (a[j] > x[i - 1])
        {
            x[i] = a[j];
            if (i > 1)
            {   
                string ans = "";
                for (int k = 1; k <= i; k++)
                {
                    ans += to_string(x[k]) + ' ';
                }
                v.push_back(ans);
            }
            Try(i + 1, j + 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    Try(1, 1);
    sort(v.begin(), v.end());
    for (string x : v) cout << x << endl;
    return 0;
}