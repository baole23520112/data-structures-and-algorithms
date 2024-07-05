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

vector<string> ans;
void init()
{
    queue<string> q;
    q.push("6");
    q.push("8");
    ans.push_back("6");
    ans.push_back("8");
    while(q.front().size() < 18)
    {
        string temp = q.front(); q.pop();
        q.push(temp + "6");
        q.push(temp + "8");
        ans.push_back(temp + "6");
        ans.push_back(temp + "8");
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    init();
    while(t--)
    {
        int n; cin >> n;
        vector<string> temp;
        for (int i = 0; i < ans.size() && ans[i].size() <= n; i++)
        {
            temp.push_back(ans[i]);
        }
        reverse(temp.begin(), temp.end());
        for (string x : temp) cout << x << ' ';
        cout << endl;
    }
    return 0;
}