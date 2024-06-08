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
    int t; cin >> t;
    stack<int> st;
    while(t--)
    {
        string s; cin >> s;
        if (s == "top")
        {
            if (st.empty())
            {
                cout << "NONE" << endl;
            }
            else 
            {
                cout << st.top() << endl;
            }
        }
        else if (s == "push")
        {
            int temp;
            cin >> temp;
            st.push(temp);
        }
        else if (s == "pop")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
    }
    return 0;
}