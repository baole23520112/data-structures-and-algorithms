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

int n, s, a[21], sum = 0, x[21], cnt = 0;
vector<vector<int>> v;

void Try(int i, int bd)
{
    for (int j = bd; j <= n; j++) // bd -> n (a[bd] -> a[n])
    {
        if (sum + a[j] <= s)
        {
            sum += a[j];
            x[i] = a[j];
            if (sum == s)
            {
                cnt++;
                for (int k = 1; k <= i; k++)
                vector<int> temp(x + 1, x + i + 1);
                sort(temp.begin(), temp.end());
                v.push_back(temp);
            }
            else
                Try(i + 1, j); // van tinh j
            sum -= a[j];
        }
        else
            return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a, a + n);
    Try(1, 1);
    if (!cnt) cout << -1;
    else
    {
        cout << cnt << endl;
        for (auto x : v)
        {
            cout << '{';
            for (int i = 0; i < x.size(); i++)
            {
                cout << x[i];
                if (i != x.size() - 1) cout << ' ';
            }
            cout << '}' << endl;
        }
    }
    return 0;
}
