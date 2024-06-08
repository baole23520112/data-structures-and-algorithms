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
    map<char, int> mp;
    int k; cin >> k;
    string s; cin >> s;
    for (char x : s) mp[x]++;
    priority_queue<ll> q;
    for (auto x : mp)
    {
        q.push(x.second);
    }
    while(!q.empty() && k--)
    {
        ll temp = q.top();
        q.pop();
        temp--;
        if (temp) q.push(temp);
    }
    ll sum = 0;
    while(!q.empty())
    {
        ll temp = q.top();
        sum += (1ll * temp * temp) % mod;
        sum %= mod;
        q.pop();
    }
    cout << sum;
    return 0;
}