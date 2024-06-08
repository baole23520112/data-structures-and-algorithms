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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

bool check[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    pair<int, int> a[n];
    for (auto &x : a) 
    {
        int b; cin >> b >> x.first >> x.second;
    }
    sort(a, a + n, cmp);
    int sum = 0;
    int dl = 0;
    for (int i = 0; i < n; i++)
    {
        int j = a[i].first;
        while(j > 0 && check[j]) j--;
        if (j > 0)
        {
            sum += a[i].second;
            check[j] = true;
        }
    }
    cout << sum;
    return 0;
}