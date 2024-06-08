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

int n, cot[105], cheo1[105], cheo2[105];
int x[105];

void in()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == x[i]) cout << 'Q';
            else cout << '.';
        }
        cout << endl;
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 1 && cheo1[i - j + n] == 1 && cheo2[i + j - 1] == 1)
        {
            x[i] = j;
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
            if (i == n)
            {
                in();
            }
            else 
                Try(i + 1);
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i <= 100; i++)
    {
        cot[i] = cheo1[i] = cheo2[i] = 1;
    }
    Try(1);
    return 0;
}