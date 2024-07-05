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
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    stack<int> st;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        while(!st.empty() && a[st.top()] < a[i])
        {
            b[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        b[st.top()] = -1;
        st.pop();
    }
    for (int x : b) cout << x << ' ';
    return 0;
}