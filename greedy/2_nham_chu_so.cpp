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
    string a, b; cin >> a >> b;
    for (char &x : a) if (x == '5') x = '6';
    for (char &x : b) if (x == '5') x = '6';
    cout << stoll(a) + stoll(b) << ' ';
    for (char &x : a) if (x == '6') x = '5';
    for (char &x : b) if (x == '6') x = '5';
    cout << stoll(a) + stoll(b);
    return 0;
}