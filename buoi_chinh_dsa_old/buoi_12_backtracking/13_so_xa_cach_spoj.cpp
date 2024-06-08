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

int n, used[10], x[10];

void Try(int i) // n chu so
{
    for (int j = 1; j <= n; j++) // 1 -> n
    {
        if ((used[j] && abs(x[i - 1] - j) != 1) || (used[j] && i == 1))
        {
            used[j] = 0;
            x[i] = j;
            if (i == n)
            {
                for (int k = 1; k <= i; k++)
                {
                    cout << x[k];
                }
                cout << endl;
            }
            else
                Try(i + 1);
            used[j] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int &x : used) x = 1;
    Try(1);
    return 0;
}
