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

int n, ok = 1, cnt, a[21];

void ktao()
{
    cnt = 1;
    a[1] = n;
}

void sinh()
{
    int i = cnt;
    while(i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else 
    {
        a[i]--;
        int thieu = cnt - i + 1;
        int lap = thieu / a[i], du = thieu % a[i];
        cnt = i;
        for (int j = 1; j <= lap; j++)
        {
            a[++cnt] = a[i];
        }
        if (du != 0) a[++cnt] = du;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int dem = 0;
    vector<string> v;
    ktao();
    while(ok)
    {
        dem++;
        string ans = "";
        for (int i = 1; i <= cnt; i++)
        {
            ans += to_string(a[i]);
            if (i != cnt) ans += '+';
        }
        v.push_back(ans);
        sinh();
    }
    cout << dem << endl;
    for (auto x : v) cout << x << endl;
    return 0;
}