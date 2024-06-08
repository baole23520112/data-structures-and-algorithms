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

int n, x[16], ok = 1, k;
int cnt = 0, a[16], dem = 0;

void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        x[i] = i;
    }
}

void sinh()
{
    int i = k;
    while(i >= 1 && x[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        x[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            x[j] = x[j - 1] + 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= k; i++) cin >> a[i];
    ktao();
    while(ok)
    {
        cnt++;
        bool check = true;
        for (int i = 1; i <= k; i++)
        {
            if (a[i] != x[i]) 
            {
                check = false;
                // break;
            }
            cout << x[i] << ' ';
        }
        cout << endl;
        if (check)
        {
            dem = cnt;
        }
        sinh(); 
    }
    cout << cnt - dem + 1;
    return 0;
}