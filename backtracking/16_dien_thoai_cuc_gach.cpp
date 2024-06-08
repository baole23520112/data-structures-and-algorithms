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

string s, temp = "";
vector<string> ans;

map<char, string> mp = 
                    {
                        {'2', "abc"},
                        {'3', "def"},
                        {'4', "ghi"},
                        {'5', "jkl"},
                        {'6', "mno"},
                        {'7', "pqrs"},
                        {'8', "tuv"},
                        {'9', "wxyz"}
                    };

void Try(int i)
{
    for (int j = 0; j < mp[s[i]].size(); j++)
    {
        temp += mp[s[i]][j];
        // cout << temp << endl;
        if (i == s.size() - 1)
        {
            ans.push_back(temp);
        }
        else if (i < s.size() - 1)
            Try(i + 1);
        temp.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    Try(0);
    sort(ans.begin(), ans.end());
    for (string x : ans) cout << x << ' ';
    return 0;
}