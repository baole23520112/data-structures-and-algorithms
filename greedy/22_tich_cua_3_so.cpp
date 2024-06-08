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

bool check2(map<int, int> mp)
{
    for (auto x : mp)
    {
        if (x.second >= 3) return true;
    }
    return false;
}

bool check1(map<int, int> mp)
{
    for (auto x : mp)
    {
        if (x.second >= 6) return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if (n > 1) mp[n]++;
    if (mp.size() > 2 || (mp.size() == 2 && check2(mp)) || (mp.size() == 1 && check1(mp)))
    {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}