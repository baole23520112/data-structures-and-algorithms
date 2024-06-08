#include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// v[i] tương ứng với phần tử cuối cùng nhỏ nhất có thể của dãy con tăng dài nhất có độ dài là i + 1
// a[i] > tất cả ptử trong vector -> thêm ptử vào cuối vector
// tìm phần tử nhỏ nhất >= a[i] -> thay đổi

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    vector<int> v;
    int maxEle = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxEle)
        {
            v.push_back(a[i]);
            maxEle = a[i];
        }
        else
        {
            auto it = lower_bound(v.begin(), v.end(), a[i]);
            int pos = it - v.begin();
            v[pos] = a[i];
            if (pos == v.size() - 1)
                maxEle = a[i];
        }
        // auto it = lower_bound(v.begin(), v.end(), a[i]);
        // if (it == v.end())
        //     v.push_back(a[i]);
        // else 
        //     *it = a[i];
    }
    cout << v.size();
    return 0;
}