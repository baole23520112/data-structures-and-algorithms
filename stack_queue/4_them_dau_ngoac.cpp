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
int count1 = 0;
void solve(string s)
{
    stack<char> st;
    for (char x : s)
    {
        if (x == '(' || x == '[' || x == '{')
        {
            st.push(x);
        }
        else
        {
            if (st.empty()) count1++;
            else if (st.top() != '(' && x == ')') count1++;
            else if (st.top() != '[' && x == ']') count1++;
            else if (st.top() != '{' && x == '}') count1++;
            else st.pop();
        }
    }
    while(!st.empty())
    {
        st.pop();
        count1++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s; cin >> s;
    solve(s);
    cout << count1;
    return 0;
}