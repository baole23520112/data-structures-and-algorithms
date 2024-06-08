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



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<char> st;
    string s; cin >> s;
    for (char x : s)
    {
        if (st.empty() || st.top() != x)
        {
            st.push(x);
        }
        else
        {
            st.pop();
        }
    }
    vector<char> v;
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());
    for (char x : v) cout << x;
    return 0;
}