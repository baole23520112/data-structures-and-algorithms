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

string s = "()[]{}";
int n, check = 0;
char a[16];

bool check(int n)
{
    stack<char> st;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == '(' || a[i] == '{' || a[i] == '[')
        {
            st.push(a[i]);
        }
        else
        {
            if (st.empty()) return false;
            else if (a[i] == ')' && st.top() == '(')
                st.pop();
            else if (a[i] == '}' && st.top() == '{')
                st.pop();
            else if (a[i] == ']' && st.top() == '[')
                st.pop();
            else return false;
        }
    }
    if (st.empty()) return true;
    return false;
}

void Try(int i)
{
    for (int j = 0; j <= 5; j++)
    {
        a[i] = s[j];
        // for (int k = 1; k <= i; k++)
        // {
        //     cout << a[k];
        // }
        // cout << endl;
        if (i == n)
        {
            if (check(i))
            {
                check = 1;
                for (int k = 1; k <= i; k++)
                {
                    cout << a[k];
                }
                cout << ' ';
            }
        }
        else Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    Try(1);
    if (!check) cout << "NOT FOUND";
    return 0;
}