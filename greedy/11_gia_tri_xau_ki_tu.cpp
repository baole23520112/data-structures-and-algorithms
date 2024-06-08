#include <bits/stdc++.h>

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
    while(t--)
    {
        int k; cin >> k;
        string s; cin >> s;
        int a[52] = {0};
        for (char x : s)
        {
            a[(islower(x)) ? (x - 'a') : (x - 'A' + 26)]++;
        }
        priority_queue<int> q;
        for (int x : a) if (x) q.push(x);
        while(k-- && q.size())
        {
            int temp = q.top();
            q.pop();
            if (temp - 1 > 0)
                q.push(temp - 1);
        }
        ll sum = 0;
        while(!q.empty())
        {
            sum += pow(q.top(), 2);
            q.pop();
        }
        cout << sum << endl;
        // int d[256] = {0};
        // for (char c : s) d[c]++;
        // priority_queue<int> p;
        // for (int i = 0; i < 256; i++)
        // {
        //     if (d[i]) p.push(d[i]);
        // }
        // while(k-- && p.size())
        // {
        //     int u = p.top(); p.pop();
        //     if (u - 1 >= 1) p.push(u - 1);
        // }
        // ll res = 0;
        // while(!p.empty())
        // {
        //     int u = p.top(); p.pop();
        //     res += 1ll * u * u;
        // }
        // cout << res << endl;
    }
    return 0;
}