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

string s;
vector<string> temp;
vector<vector<string>> ans;

bool check(string s)
{
    int i = 0, j = s.size() - 1;
    while(i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++; j--;
    }
    return true;
}

void Try(int start)
{
    if (start > s.size() - 1) ans.push_back(temp);
    for (int end = start; end < s.size(); end++)
    {
        string tmp = s.substr(start, end - start + 1);
        if (check(tmp))
        {
            temp.push_back(tmp);
            Try(end + 1);
            temp.pop_back();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    Try(0);
    for (auto x : ans)
    {
        for (auto s : x) cout << s << ' ';
        cout << endl;
    }
    return 0;
}