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

int n, x[100], used[100];

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0)
        {
            used[j] = 1;
            x[i] = j;
            if (i == n)
            {
                for (int k = 1; k <= n; k++)
                {
                    cout << x[k] << ' ';
                }
                cout << endl;
            }
            else    
                Try(i + 1);
            used[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    Try(1);
    return 0;
}