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
    string s; cin >> s;
    stringstream ss(s);
    string word;
    vector<int> v;
    while(getline(ss, word, '0'))
    {
        v.push_back(word.size());
    }
    priority_queue<int> q;
    for (int x : v) if (x) q.push(x);
    ll sum = 0;
    int temp1, temp2;
    while(!q.empty())
    {
        temp1 = q.top(); q.pop();
        if (!q.empty())
        {
            temp2 = q.top(); q.pop();
        }
        sum += temp1;
    }
    cout << sum;
    return 0;
}