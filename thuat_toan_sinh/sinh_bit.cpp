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



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++) // duyệt qua từng bit
        {
            if ((i & (1 << j)) != 0) // nếu bit thứ j của i bằng 1
            {
                cout << 1 << ' ';
            }
            else
            {
                cout << 0 << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}