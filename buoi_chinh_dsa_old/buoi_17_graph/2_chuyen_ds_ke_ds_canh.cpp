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
    int n; cin >> n;
    vector<int> v[n + 1];
    cin.ignore(1);
    for (int i = 1; i <= n; i++)
    {
        string s; getline(cin, s, '\n');
        stringstream ss(s);
        string number;
        while(ss >> number)
        {
            v[i].push_back(stoi(number));
        }
    }
    for (int i = 1; i <= n; i++)
    {
        sort(v[i].begin(), v[i].end());
        for (int x : v[i])
        {
            if (x > i)
            {
                cout << i << ' ' << x << endl;
            }
        }
    }
    return 0;
}