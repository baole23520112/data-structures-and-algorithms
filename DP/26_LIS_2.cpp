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

// build v[i]: phần tử cuối cùng nhỏ nhất có thể của dãy con tăng dần có độ dài là i + 1
// 2 thao tác
// 1. a[i] > tất cả các ptử trong v thì bổ sung a[i] vào cuối v
// 2. tìm ptử nhỏ nhất >= a[i] và thay nó bằng a[i]
// note: các ptử trong v không phải là dãy con tăng dần lớn nhất, chỉ sd size của v là số ptử.

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    for (int x : a)
    {
        auto it = lower_bound(v.begin(), v.end(), x);
        if (it == v.end())
            v.push_back(x);
        else
            *it = x;
    }
    cout << v.size();
    return 0;
}