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

ll sum = 0, cnt = 0;
int n, k, s;

void Try(int i, int bd)
{
    for (int j = bd; j <= n; j++) // khong lon hon n, luon lon hon so vua chon
    {
        sum += j;
        if (i == k) // sl ptu = k
        {
            if (sum == s) // tong cac ptu = s
            {
                cnt++; //
            }
        }
        else
        {
            Try(i + 1, j + 1); // như chọn tổ hợp, số sau phải lớn hơn số trước
        }
        // backtrack
        sum -= j;
    }
}

void ql(int i, int bd, int sum
{
    for (int j = bd; j <= n; j++)
    {
        x[i] = j;
        if (i == k)
            xuly(;)
        else ql(i + 1, j + 1, sum + j);
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k >> s;
    Try(1, 1);
    cout << cnt;
    return 0;
}
