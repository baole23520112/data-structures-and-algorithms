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

int s, n, sum = 0, x[10], check = 0;

void Try(int i, int position)
{
    for (int j = position; j <= 9; j++)
    {
        if (sum + j <= s)
        {
            sum += j;
            x[i] = j;
            if (sum == s && i == n)
            {
                check = 1;
                for (int k = 1; k <= i; k++)
                {
                    cout << x[k];
                    if (k != i) cout << " + ";
                }
                cout << endl;
            }
            else
                Try(i + 1, j + 1);
            sum -= j;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> n;
    Try(1, 1);
    if (!check) cout << "NOT FOUND";
    return 0;
}