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

int n, x[11], ok = 1;
int cnt = 0, a[11], dem = 0;

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        x[i] = i;
    }
}

void sinh()
{
    int i = n - 1;
    while(i >= 1 && x[i] > x[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int j = n;
        while(x[i] > x[j]) j--;
        swap(x[i], x[j]);
        reverse(x + i + 1, x + n + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ktao();
    while(ok)
    {
        cnt++;
        bool check = true;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != x[i]) 
            {
                check = false;
            }
        }
        if (check) dem = cnt;
        sinh(); 
    }
    cout << dem;
    return 0;
}