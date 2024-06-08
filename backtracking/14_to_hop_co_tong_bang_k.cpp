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

int n, s, sum = 0, a[21], x[1000], cnt = 0;
vector<string> v;

void Try(int i, int pos)
{
    for (int j = pos; j <= n; j++)
    {
        if (sum + a[j] <= s)
        {
            sum += a[j];
            x[i] = a[j];
            if (sum == s)
            {
                cnt++;
                string ans = "";
                ans += '{';
                for (int k = 1; k <= i; k++)
                {
                    ans += to_string(x[k]);
                    if (k != i) ans += ' ';
                }
                ans += '}';
                v.push_back(ans);
            }
            else if (sum < s)
                Try(i + 1, j);
            sum -= a[j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1, 1);
    if (cnt)
    {
        cout << cnt << endl;
        for (string x : v) cout << x << endl;
    }
    else 
    {
        cout << -1;
    }
    return 0;
}